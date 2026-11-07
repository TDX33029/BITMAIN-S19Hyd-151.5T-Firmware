// FUN_0152c840 @ 0152c840 size=120 calls_out=1 calls_in=1
// strings: 

void FUN_0152c840(undefined1 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (uVar3 - uVar4 < 2) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 4) = &DAT_00410f57;
    *(undefined4 *)(param_1 + 8) = 3;
    return;
  }
  uVar2 = uVar4 + 2;
  bVar6 = 0xfffffffc < uVar4;
  bVar5 = uVar4 == 0xfffffffd;
  if (uVar4 < 0xfffffffe) {
    bVar6 = uVar3 <= uVar2;
    bVar5 = uVar2 == uVar3;
  }
  param_2[2] = uVar2;
  if (bVar6 && !bVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar2,uVar3,&DAT_018a78f8);
  }
  iVar1 = *param_2;
  *param_1 = 0x18;
  *(ushort *)(param_1 + 2) = *(ushort *)(iVar1 + uVar4) << 8 | *(ushort *)(iVar1 + uVar4) >> 8;
  return;
}

