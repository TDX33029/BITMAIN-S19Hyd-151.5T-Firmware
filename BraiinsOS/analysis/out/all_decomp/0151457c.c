// FUN_0151457c @ 0151457c size=140 calls_out=2 calls_in=1
// strings: Random

void FUN_0151457c(undefined1 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  if (uVar3 - uVar2 < 0x20) {
    *(char **)(param_1 + 8) = "Random";
    *(undefined4 *)(param_1 + 0xc) = 6;
    param_1[4] = 0xc;
    *param_1 = 1;
    return;
  }
  uVar1 = uVar2 + 0x20;
  bVar5 = 0xffffffde < uVar2;
  bVar4 = uVar2 == 0xffffffdf;
  if (uVar2 < 0xffffffe0) {
    bVar5 = uVar3 <= uVar1;
    bVar4 = uVar1 == uVar3;
  }
  param_2[2] = uVar1;
  if (bVar5 && !bVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar2,uVar1,uVar3,&DAT_018a78f8);
  }
  FUN_016dd1aa(param_1 + 1,*param_2 + uVar2,0x20);
  *param_1 = 0;
  return;
}

