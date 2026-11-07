// FUN_011c39a8 @ 011c39a8 size=868 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_011c39a8(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_58;
  int iStack_54;
  undefined4 local_50;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  piVar4 = &local_58;
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar8 = *(uint *)(param_1 + 0x14);
  if (uVar7 <= uVar8) goto LAB_011c3d6c;
  iVar5 = *(int *)(param_1 + 0xc);
  uVar6 = (uint)*(byte *)(iVar5 + uVar8);
  switch(uVar6) {
  case 0x5b:
    uVar2 = 10;
    goto LAB_011c3c80;
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
    goto switchD_011c39dc_caseD_5c;
  case 0x66:
    uVar6 = uVar8 + 1;
    *(uint *)(param_1 + 0x14) = uVar6;
    if (uVar6 < uVar7) {
      cVar1 = *(char *)(iVar5 + uVar6);
      uVar6 = uVar8 + 2;
      *(uint *)(param_1 + 0x14) = uVar6;
      if (cVar1 == 'a') {
        if (uVar7 == uVar6) break;
        cVar1 = *(char *)(iVar5 + uVar6);
        uVar6 = uVar8 + 3;
        *(uint *)(param_1 + 0x14) = uVar6;
        if (cVar1 == 'l') {
          if (uVar6 == uVar7) break;
          cVar1 = *(char *)(iVar5 + uVar6);
          uVar6 = uVar8 + 4;
          *(uint *)(param_1 + 0x14) = uVar6;
          if (cVar1 == 's') {
            if (uVar6 == uVar7) break;
            cVar1 = *(char *)(iVar5 + uVar6);
            *(uint *)(param_1 + 0x14) = uVar8 + 5;
            if (cVar1 == 'e') {
              local_28 = (uint)local_28._2_2_ << 0x10;
              goto LAB_011c3c88;
            }
          }
        }
      }
LAB_011c3c9c:
      local_28 = 9;
      goto LAB_011c3c00;
    }
    break;
  case 0x6e:
    uVar6 = uVar8 + 1;
    *(uint *)(param_1 + 0x14) = uVar6;
    if (uVar6 < uVar7) {
      cVar1 = *(char *)(iVar5 + uVar6);
      uVar6 = uVar8 + 2;
      *(uint *)(param_1 + 0x14) = uVar6;
      if (cVar1 == 'u') {
        if (uVar7 == uVar6) break;
        cVar1 = *(char *)(iVar5 + uVar6);
        uVar6 = uVar8 + 3;
        *(uint *)(param_1 + 0x14) = uVar6;
        if (cVar1 == 'l') {
          if (uVar6 == uVar7) break;
          cVar1 = *(char *)(iVar5 + uVar6);
          *(uint *)(param_1 + 0x14) = uVar8 + 4;
          if (cVar1 == 'l') {
            uVar2 = 7;
            goto LAB_011c3c80;
          }
        }
      }
      goto LAB_011c3c9c;
    }
    break;
  case 0x74:
    uVar6 = uVar8 + 1;
    *(uint *)(param_1 + 0x14) = uVar6;
    if (uVar6 < uVar7) {
      cVar1 = *(char *)(iVar5 + uVar6);
      uVar6 = uVar8 + 2;
      *(uint *)(param_1 + 0x14) = uVar6;
      if (cVar1 == 'r') {
        if (uVar7 == uVar6) break;
        cVar1 = *(char *)(iVar5 + uVar6);
        uVar6 = uVar8 + 3;
        *(uint *)(param_1 + 0x14) = uVar6;
        if (cVar1 == 'u') {
          if (uVar6 == uVar7) break;
          cVar1 = *(char *)(iVar5 + uVar6);
          *(uint *)(param_1 + 0x14) = uVar8 + 4;
          if (cVar1 == 'e') {
            local_28 = CONCAT22(local_28._2_2_,0x100);
            goto LAB_011c3c88;
          }
        }
      }
      goto LAB_011c3c9c;
    }
    break;
  case 0x7b:
    uVar2 = 0xb;
LAB_011c3c80:
    local_28 = CONCAT31(local_28._1_3_,uVar2);
LAB_011c3c88:
    uVar3 = FUN_0157cc00(&local_28,param_2,&DAT_01889fd8);
    uVar3 = FUN_011da160(uVar3,param_1);
    return uVar3;
  default:
    if (uVar6 == 0x22) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(uint *)(param_1 + 0x14) = uVar8 + 1;
      FUN_0157e5fc(&local_34,(int *)(param_1 + 0xc));
      if (local_34 == 2) {
        return local_30;
      }
      local_24 = local_30;
      local_20 = local_2c;
      local_28 = CONCAT31(local_28._1_3_,5);
      goto LAB_011c3c88;
    }
    if (uVar6 == 0x2d) {
      *(uint *)(param_1 + 0x14) = uVar8 + 1;
      FUN_011b93e8(&local_58,param_1,0);
      if (local_58 == 3 && iStack_54 == 0) {
        return local_50;
      }
      goto LAB_011c3d00;
    }
    goto switchD_011c39dc_caseD_5c;
  }
  local_28 = 5;
LAB_011c3c00:
  uVar3 = FUN_011b9398(param_1,&local_28);
  return uVar3;
switchD_011c39dc_caseD_5c:
  if (uVar6 - 0x30 < 10) {
    FUN_011b93e8(&local_48,param_1,1);
    if (local_48 == 3 && local_44 == 0) {
      return local_40;
    }
    piVar4 = &local_48;
LAB_011c3d00:
    uVar3 = FUN_0157b7ec(piVar4,param_2,&DAT_01889fd8);
    uVar3 = FUN_011da160(uVar3,param_1);
    return uVar3;
  }
LAB_011c3d6c:
  local_28 = 10;
  uVar3 = FUN_011b933c(param_1,&local_28);
  uVar3 = FUN_011da160(uVar3,param_1);
  return uVar3;
}

