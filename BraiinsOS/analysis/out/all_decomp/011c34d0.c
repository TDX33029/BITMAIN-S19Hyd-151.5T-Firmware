// FUN_011c34d0 @ 011c34d0 size=1044 calls_out=12 calls_in=1
// strings: 

int FUN_011c34d0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  piVar4 = &local_60;
  if (*(char *)(param_1 + 0x28) != '\x01') {
    FUN_011ef738(&local_30,param_1 + 0x18);
    uVar3 = 0;
    if ((local_30 & 0xff) == 5) goto LAB_011c3528;
    if ((local_30 & 0xff) == 4) {
      uVar3 = (uint)local_30._1_1_;
      *(byte *)(param_1 + 0x29) = local_30._1_1_;
      *(undefined1 *)(param_1 + 0x28) = 1;
      goto LAB_011c3528;
    }
    piVar4 = (int *)FUN_0157c4a0(local_30,local_2c);
    if (*piVar4 == 1) {
      FUN_009b8520(piVar4 + 1);
    }
    else if ((*piVar4 == 0) && (piVar4[2] != 0)) {
      thunk_FUN_016d3fb4(piVar4[1]);
    }
    thunk_FUN_016d3fb4(piVar4);
LAB_011c3900:
    local_30 = 10;
    uVar5 = FUN_0157c50c(&local_30,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    goto LAB_011c38ac;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x29);
LAB_011c3528:
  iVar6 = param_1 + 0xc;
  switch(uVar3) {
  case 0x5b:
    uVar2 = 10;
    break;
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
switchD_011c3540_caseD_5c:
    if (9 < uVar3 - 0x30) goto LAB_011c3900;
    FUN_011bfde4(&local_50,param_1,1);
    if (local_50 == 3 && local_4c == 0) {
      return local_48;
    }
    piVar4 = &local_50;
LAB_011c38e4:
    uVar5 = FUN_0157b7ec(piVar4,param_2,&DAT_01889fd8);
    goto LAB_011c38ac;
  case 0x66:
    uVar2 = *(undefined1 *)(param_1 + 0x29);
    cVar1 = *(char *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x28) = 0;
    if ((cVar1 == '\x01') && (*(int *)(param_1 + 0xc) != -0x80000000)) {
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == *(int *)(param_1 + 0xc)) {
        FUN_006029c0(iVar6);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar7) = uVar2;
      *(int *)(param_1 + 0x14) = iVar7 + 1;
    }
    iVar6 = FUN_011bfb38(param_1,&DAT_00568edc,4);
    if (iVar6 != 0) {
      return iVar6;
    }
    local_30 = (uint)local_30._2_2_ << 0x10;
    goto LAB_011c38a0;
  case 0x6e:
    uVar2 = *(undefined1 *)(param_1 + 0x29);
    cVar1 = *(char *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x28) = 0;
    if ((cVar1 == '\x01') && (*(int *)(param_1 + 0xc) != -0x80000000)) {
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == *(int *)(param_1 + 0xc)) {
        FUN_006029c0(iVar6);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar7) = uVar2;
      *(int *)(param_1 + 0x14) = iVar7 + 1;
    }
    iVar6 = FUN_011bfb38(param_1,&DAT_003b6412,3);
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar2 = 7;
    break;
  case 0x74:
    uVar2 = *(undefined1 *)(param_1 + 0x29);
    cVar1 = *(char *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x28) = 0;
    if ((cVar1 == '\x01') && (*(int *)(param_1 + 0xc) != -0x80000000)) {
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == *(int *)(param_1 + 0xc)) {
        FUN_006029c0(iVar6);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar7) = uVar2;
      *(int *)(param_1 + 0x14) = iVar7 + 1;
    }
    iVar6 = FUN_011bfb38(param_1,&DAT_0038bd26,3);
    if (iVar6 != 0) {
      return iVar6;
    }
    local_30 = CONCAT22(local_30._2_2_,0x100);
    goto LAB_011c38a0;
  case 0x7b:
    uVar2 = 0xb;
    break;
  default:
    if (uVar3 != 0x22) {
      if (uVar3 != 0x2d) goto switchD_011c3540_caseD_5c;
      uVar2 = *(undefined1 *)(param_1 + 0x29);
      cVar1 = *(char *)(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x28) = 0;
      if ((cVar1 == '\x01') && (*(int *)(param_1 + 0xc) != -0x80000000)) {
        iVar7 = *(int *)(param_1 + 0x14);
        if (iVar7 == *(int *)(param_1 + 0xc)) {
          FUN_006029c0(iVar6);
        }
        *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar7) = uVar2;
        *(int *)(param_1 + 0x14) = iVar7 + 1;
      }
      FUN_011bfde4(&local_60,param_1,0);
      if (local_60 == 3 && iStack_5c == 0) {
        return local_58;
      }
      goto LAB_011c38e4;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x29);
    cVar1 = *(char *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x28) = 0;
    if ((cVar1 == '\x01') && (*(int *)(param_1 + 0xc) != -0x80000000)) {
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == *(int *)(param_1 + 0xc)) {
        FUN_006029c0(iVar6);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar7) = uVar2;
      *(int *)(param_1 + 0x14) = iVar7 + 1;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_011bca9c(&local_3c,iVar6,param_1);
    if (local_3c == 2) {
      return local_38;
    }
    local_2c = local_38;
    uVar2 = 5;
    local_28 = local_34;
  }
  local_30 = CONCAT31(local_30._1_3_,uVar2);
LAB_011c38a0:
  uVar5 = FUN_0157cc00(&local_30,param_2,&DAT_01889fd8);
LAB_011c38ac:
  iVar6 = FUN_011da120(uVar5,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return iVar6;
}

