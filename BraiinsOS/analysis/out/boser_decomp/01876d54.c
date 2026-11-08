// FUN_01876d54 @ 01876d54 size=224 calls_out=1 calls_in=0
// strings: 

int FUN_01876d54(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + 0x1a);
    uVar5 = (uint)*(byte *)(param_1 + 0x1b);
    iVar3 = 0;
    piVar2 = param_2;
    if (uVar5 != uVar4) {
      if ((10 < uVar5) || (uVar5 < uVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar4,uVar5,10,&DAT_01d20b08);
      }
      iVar1 = 0;
      *param_2 = param_1 + 0x10 + uVar4;
      param_2[1] = uVar5 - uVar4;
      iVar3 = 1;
      if (param_3 == 1) goto LAB_01876dd4;
      piVar2 = param_2 + 2;
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 != 0) {
      *piVar2 = *(int *)(param_1 + 4);
      piVar2[1] = iVar1;
      iVar1 = 1;
      goto LAB_01876dd4;
    }
  }
  iVar1 = 0;
LAB_01876dd4:
  uVar4 = iVar1 + iVar3;
  if (param_3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar4,param_3,param_3,&DAT_01d20b38);
  }
  bVar6 = param_3 != uVar4;
  if (bVar6) {
    param_3 = *(uint *)(param_1 + 0x20);
  }
  bVar7 = param_3 != 0;
  if (bVar6 && bVar7) {
    param_1 = *(int *)(param_1 + 0x1c);
  }
  if (bVar6 && bVar7) {
    param_2 = param_2 + uVar4 * 2;
    *param_2 = param_1;
  }
  if (bVar6 && bVar7) {
    param_2[1] = param_3;
  }
  return (bVar6 && bVar7) + uVar4;
}

