// FUN_01896c94 @ 01896c94 size=184 calls_out=4 calls_in=2
// strings: 

void FUN_01896c94(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int *piVar4;
  undefined1 local_50 [48];
  
  piVar4 = (int *)*param_2;
  uVar2 = *(uint *)(*piVar4 + 0xc);
  if (0xc < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0xc,&DAT_01d2196c);
  }
  iVar1 = FUN_01bd4ea8(param_3);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_0051d55d,0x34,&DAT_01d2191c);
  }
  pcVar3 = (code *)piVar4[1];
  FUN_01bed93e(local_50,0,0x30);
  (*pcVar3)(local_50,param_3,param_2 + 2);
  (*(code *)param_2[1])(param_1);
  return;
}

