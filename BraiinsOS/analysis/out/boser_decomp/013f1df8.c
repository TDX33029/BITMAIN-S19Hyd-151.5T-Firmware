// FUN_013f1df8 @ 013f1df8 size=376 calls_out=6 calls_in=2
// strings: window | probation | protected | internal error: entered unreachable code

void FUN_013f1df8(int param_1,int param_2,uint param_3,ushort param_4,int *param_5)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  DataMemoryBarrier(0xb);
  if (*(char *)(*(int *)(param_2 + 0x80) + 0x38) == '\0') {
    FUN_01401748(*(undefined4 *)(param_2 + 0x84));
    goto LAB_013f1ef8;
  }
  DataMemoryBarrier(0xb);
  *(undefined1 *)(*(int *)(param_2 + 0x80) + 0x38) = 0;
  uVar8 = *(uint *)(*(int *)(param_2 + 0x80) + 0x30);
  DataMemoryBarrier(0xb);
  iVar11 = *param_5;
  uVar6 = param_5[2];
  uVar10 = param_5[3];
  iVar7 = uVar6 - uVar8;
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  iVar9 = uVar10 - (uVar8 > uVar6);
  *param_5 = iVar11 + -1;
  param_5[1] = param_5[1] - (uint)(iVar11 == 0);
  if (uVar10 == 0 && (uVar8 <= uVar6) <= uVar10) {
    iVar7 = 0;
    iVar9 = 0;
  }
  param_5[2] = iVar7;
  param_5[3] = iVar9;
  uVar6 = FUN_01401a24(uVar3);
  if (uVar6 != 0) {
    uVar3 = 6;
    pcVar4 = "window";
    iVar7 = param_1;
    switch(uVar6 & 3) {
    case 0:
      goto switchD_013f1ea8_caseD_0;
    case 1:
      iVar7 = param_1 + 0x18;
      pcVar4 = "probation";
      break;
    case 2:
      iVar7 = param_1 + 0x30;
      pcVar4 = "protected";
      break;
    case 3:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3a58);
    }
    uVar3 = 9;
switchD_013f1ea8_caseD_0:
    FUN_01406f68(pcVar4,uVar3,iVar7);
  }
  FUN_01407120(param_1 + 0x48,*(undefined4 *)(param_2 + 0x84));
LAB_013f1ef8:
  if ((param_3 & 1) == 0) {
LAB_013f1f5c:
    FUN_01406bcc(param_2);
    return;
  }
  puVar5 = (ushort *)(*(int *)(param_2 + 0x80) + 0x36);
  do {
    uVar1 = *puVar5;
    DataMemoryBarrier(0xb);
    if ((param_4 <= uVar1) || ((short)(param_4 - uVar1) < 0)) goto LAB_013f1f5c;
    if (*puVar5 == uVar1) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(puVar5);
      if (bVar2) {
        *puVar5 = param_4;
        DataMemoryBarrier(0xb);
        goto LAB_013f1f5c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
  } while( true );
}

