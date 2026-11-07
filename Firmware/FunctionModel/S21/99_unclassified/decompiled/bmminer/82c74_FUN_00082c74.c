// FUN_00082c74 @ 00082c74  size=92  callers=1
// program: bmminer


void FUN_00082c74(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 != 0) {
    uVar1 = 0xfffffffe;
  }
  FUN_00081200(param_1,1,0,0x3c,uVar1 & 0xef | 0x80008d04);
  return;
}

