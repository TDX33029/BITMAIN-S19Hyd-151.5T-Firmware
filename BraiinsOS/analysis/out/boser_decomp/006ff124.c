// FUN_006ff124 @ 006ff124 size=412 calls_out=7 calls_in=2
// strings: internal error: entered unreachable code

void FUN_006ff124(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  
  iVar4 = *param_2;
  uVar5 = param_2[4];
  uVar8 = FUN_0070093c(param_3,iVar4,uVar5);
  uVar2 = *(uint *)(iVar4 + 0x10);
  if (uVar2 <= uVar5) {
LAB_006ff2b8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar5,uVar2,&DAT_01c062d0);
  }
  iVar3 = 8;
  pcVar1 = (char *)(*(int *)(iVar4 + 0xc) + uVar5 * 0x14);
  if (*pcVar1 != '\0') {
    iVar3 = 0x10;
  }
  uVar7 = *(uint *)(pcVar1 + iVar3);
  uVar5 = FUN_006fb3b4(iVar4,uVar5);
  uVar2 = *(uint *)(iVar4 + 0x10);
  if (uVar2 <= uVar5) goto LAB_006ff2b8;
  iVar3 = 8;
  pcVar1 = (char *)(*(int *)(iVar4 + 0xc) + uVar5 * 0x14);
  if (*pcVar1 != '\0') {
    iVar3 = 0x10;
  }
  uVar2 = *(uint *)(pcVar1 + iVar3);
  iVar3 = param_2[1];
  uVar5 = param_2[2];
  if (uVar2 < uVar7) goto LAB_006ff208;
  if (uVar7 != 0) {
    if (uVar7 < uVar5) {
      if (*(char *)(iVar3 + uVar7) < -0x40) goto LAB_006ff208;
    }
    else if (uVar7 != uVar5) goto LAB_006ff208;
  }
  if (uVar2 != 0) {
    if (uVar2 < uVar5) {
      if (*(char *)(iVar3 + uVar2) < -0x40) {
LAB_006ff208:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar3,uVar5,uVar7,uVar2,&DAT_01c064f0);
      }
    }
    else if (uVar2 != uVar5) goto LAB_006ff208;
  }
  iVar6 = uVar2 - uVar7;
  if (iVar6 == 4) {
    if (*(int *)(iVar3 + uVar7) == 0x65757274) {
LAB_006ff26c:
      iVar3 = param_2[3];
      *param_1 = 9;
      *(undefined8 *)(param_1 + 1) = uVar8;
      *(bool *)(param_1 + 3) = iVar6 == 4;
      FUN_006f6e98(iVar4,iVar3);
      return;
    }
  }
  else if ((iVar6 == 5) && (iVar3 = thunk_FUN_01bed842((int *)(iVar3 + uVar7),"f",5), iVar3 == 0))
  goto LAB_006ff26c;
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c064b0);
}

