// FUN_007e5ad0 @ 007e5ad0 size=112 calls_out=2 calls_in=3
// strings: 

void FUN_007e5ad0(char *param_1,char param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined4 *)FUN_00f5c59c();
  if (param_3 == 0) {
    *(undefined4 **)(param_1 + 4) = puVar2;
    *param_1 = '\x01';
    return;
  }
  (**(code **)*puVar2)();
  cVar1 = (char)param_3 + param_2 + -1;
  uVar3 = (uint)cVar1;
  if (uVar3 < 0x80000000) {
    param_1[1] = cVar1;
    cVar1 = '\0';
  }
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00387cbe,0x3f,&DAT_01885848);
  }
  *param_1 = cVar1;
  return;
}

