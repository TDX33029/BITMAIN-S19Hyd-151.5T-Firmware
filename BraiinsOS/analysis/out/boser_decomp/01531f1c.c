// FUN_01531f1c @ 01531f1c size=420 calls_out=6 calls_in=1
// strings: 

void FUN_01531f1c(undefined4 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  puVar1 = (undefined1 *)*param_1;
  puVar6 = (undefined1 *)0x22;
  if (&DAT_80000009 < puVar1) {
    puVar6 = puVar1 + 0x7ffffff6;
  }
  switch(puVar6) {
  case (undefined1 *)0x0:
  case (undefined1 *)0x5:
  case (undefined1 *)0xc:
  case (undefined1 *)0xf:
  case (undefined1 *)0x11:
  case (undefined1 *)0x12:
  case (undefined1 *)0x13:
  case (undefined1 *)0x15:
  case (undefined1 *)0x16:
  case (undefined1 *)0x17:
  case (undefined1 *)0x1e:
  case (undefined1 *)0x21:
    return;
  case (undefined1 *)0x1:
  case (undefined1 *)0x1f:
  case (undefined1 *)0x20:
    FUN_006a41c0(param_1 + 1);
    return;
  case (undefined1 *)0x2:
  case (undefined1 *)0x19:
  case (undefined1 *)0x1a:
    uVar3 = param_1[2];
    FUN_014fb844(uVar3,param_1[3]);
    FUN_01af7af8(param_1[1],uVar3,4,0xc);
    return;
  case (undefined1 *)0x3:
    uVar2 = param_1[1];
    iVar8 = uVar2 - 0xf;
    if (uVar2 < 0xf) {
      iVar8 = 0;
    }
    if (iVar8 != 1) {
      if (iVar8 != 0) {
        return;
      }
      if ((1 << (uVar2 & 0xff) & 0x7bdeU) != 0) {
        return;
      }
      uVar3 = param_1[2];
      uVar7 = param_1[3];
      break;
    }
    piVar10 = (int *)param_1[2];
    iVar9 = *piVar10;
    iVar8 = 0;
    if (iVar9 != 0) {
      iVar8 = iVar9 + -1;
    }
    switch(iVar8) {
    case 0:
      puVar4 = (uint *)(piVar10 + 2);
      if (iVar9 == 0) {
        uVar2 = *puVar4;
      }
      else {
        uVar2 = *puVar4;
        iVar8 = uVar2 - 0x22;
        if (uVar2 < 0x22) {
          iVar8 = 0;
        }
        if (iVar8 == 1) {
          piVar5 = piVar10 + 4;
          if (*piVar5 < -0x7ffffffc) goto switchD_015320c4_caseD_1;
          break;
        }
        if (iVar8 != 0) goto switchD_015320c4_caseD_1;
      }
      iVar8 = 0x1c;
      if (uVar2 == 0x22) {
        iVar8 = 4;
      }
      piVar5 = (int *)((int)puVar4 + iVar8);
      break;
    case 1:
    case 2:
    case 4:
    case 6:
    case 7:
      goto switchD_015320c4_caseD_1;
    default:
      piVar5 = piVar10 + 1;
    }
    FUN_019bb7e0(*piVar5,piVar5[1]);
switchD_015320c4_caseD_1:
    thunk_FUN_01be4678(piVar10);
    return;
  case (undefined1 *)0x4:
  case (undefined1 *)0x9:
  case (undefined1 *)0xa:
  case (undefined1 *)0xb:
  case (undefined1 *)0x10:
  case (undefined1 *)0x14:
  case (undefined1 *)0x18:
  case (undefined1 *)0x1d:
    FUN_00e0febc(param_1 + 2);
    return;
  case (undefined1 *)0x8:
switchD_01531f44_caseD_8:
    FUN_019bb7e0(param_1[1],param_1[2]);
    uVar3 = param_1[4];
    uVar7 = param_1[5];
    break;
  case (undefined1 *)0x1c:
    piVar10 = (int *)param_1[1];
    FUN_01531dec(piVar10);
    goto switchD_015320c4_caseD_1;
  default:
    puVar6 = (undefined1 *)0x6;
    if ((undefined1 *)0x80000000 < puVar1) {
      puVar6 = puVar1 + 0x7fffffff;
    }
    switch(puVar6) {
    case (undefined1 *)0x0:
      FUN_019bb7e0(param_1[1],param_1[2]);
      FUN_01443048(param_1[4],param_1[5]);
      return;
    case (undefined1 *)0x3:
      goto switchD_01531f44_caseD_8;
    case (undefined1 *)0x6:
      iVar8 = 4;
      if (puVar1 != (undefined1 *)0x80000000) {
        FUN_019bb7e0(puVar1,param_1[1]);
        iVar8 = 0xc;
      }
      uVar3 = *(undefined4 *)((int)param_1 + iVar8);
      uVar7 = ((undefined4 *)((int)param_1 + iVar8))[1];
      goto LAB_0153208c;
    }
  case (undefined1 *)0x6:
  case (undefined1 *)0x7:
  case (undefined1 *)0xd:
  case (undefined1 *)0xe:
  case (undefined1 *)0x1b:
    uVar3 = param_1[1];
    uVar7 = param_1[2];
  }
LAB_0153208c:
  FUN_019bb7e0(uVar3,uVar7);
  return;
}

