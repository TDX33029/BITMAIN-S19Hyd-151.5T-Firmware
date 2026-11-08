// FUN_000189ec @ 000189ec  size=64  callers=0
// program: bmminer


int FUN_000189ec(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00017628(param_1,4,0);
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  iVar2 = FUN_00017628(param_1,4,1);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  return (int)(short)iVar2;
}

