// FUN_006fc9e8 @ 006fc9e8 size=316 calls_out=6 calls_in=8
// strings: 

void FUN_006fc9e8(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar6 = *param_2;
  uVar7 = param_2[4];
  uVar3 = *(uint *)(iVar6 + 0x10);
  if (uVar3 <= uVar7) {
    uVar2 = uVar7;
LAB_006fcb1c:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,uVar3,&DAT_01c062d0);
  }
  iVar4 = 8;
  pcVar1 = (char *)(*(int *)(iVar6 + 0xc) + uVar7 * 0x14);
  if (*pcVar1 != '\0') {
    iVar4 = 0x10;
  }
  uVar5 = *(uint *)(pcVar1 + iVar4);
  uVar2 = FUN_006fb3b4(iVar6,uVar7);
  uVar3 = *(uint *)(iVar6 + 0x10);
  if (uVar3 <= uVar2) goto LAB_006fcb1c;
  iVar4 = 8;
  pcVar1 = (char *)(*(int *)(iVar6 + 0xc) + uVar2 * 0x14);
  if (*pcVar1 != '\0') {
    iVar4 = 0x10;
  }
  uVar2 = *(uint *)(pcVar1 + iVar4);
  iVar4 = param_2[1];
  uVar3 = param_2[2];
  if (uVar2 < uVar5) goto LAB_006fcab4;
  if (uVar5 != 0) {
    if (uVar5 < uVar3) {
      if (*(char *)(iVar4 + uVar5) < -0x40) goto LAB_006fcab4;
    }
    else if (uVar5 != uVar3) goto LAB_006fcab4;
  }
  if (uVar2 != 0) {
    if (uVar2 < uVar3) {
      if (*(char *)(iVar4 + uVar2) < -0x40) {
LAB_006fcab4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar4,uVar3,uVar5,uVar2,&DAT_01c064f0);
      }
    }
    else if (uVar2 != uVar3) goto LAB_006fcab4;
  }
  uVar8 = FUN_006fc4cc(iVar4 + uVar5,uVar2 - uVar5);
  uVar9 = FUN_0070093c(param_3,iVar6,uVar7);
  iVar4 = param_2[3];
  *(undefined8 *)(param_1 + 1) = uVar9;
  *(undefined8 *)(param_1 + 3) = uVar8;
  *param_1 = 9;
  FUN_006f6e98(iVar6,iVar4);
  return;
}

