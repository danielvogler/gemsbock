#ifndef GEMSBOCKAPP_H
#define GEMSBOCKAPP_H

#include "MooseApp.h"

class GemsbockApp;

template<>
InputParameters validParams<GemsbockApp>();

class GemsbockApp : public MooseApp
{
public:
  GemsbockApp(InputParameters parameters);
  virtual ~GemsbockApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* GEMSBOCKAPP_H */
