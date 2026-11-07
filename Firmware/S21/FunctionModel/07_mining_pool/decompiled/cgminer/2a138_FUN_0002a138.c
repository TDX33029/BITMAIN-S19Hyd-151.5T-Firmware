// FUN_0002a138 @ 0002a138  size=72  callers=1
// program: cgminer


void FUN_0002a138(double *param_1)

{
  double in_d0;
  double dVar1;
  double in_d1;
  double in_d2;
  
  dVar1 = exp(in_d1 / in_d2);
  dVar1 = 1.0 - 1.0 / dVar1;
  *param_1 = (*param_1 + (in_d0 / in_d1) * dVar1) / (dVar1 + 1.0);
  return;
}

