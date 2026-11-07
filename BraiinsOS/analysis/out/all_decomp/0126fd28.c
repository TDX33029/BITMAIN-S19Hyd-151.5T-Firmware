// FUN_0126fd28 @ 0126fd28 size=608 calls_out=7 calls_in=2
// strings: 

void FUN_0126fd28(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int iStack_34;
  undefined4 local_30 [2];
  undefined4 local_28;
  int local_24;
  undefined1 uStack_19;
  
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < uVar4) {
    do {
      uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
      uVar7 = uVar6 - 9;
      if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
        if (uVar6 != 0x6e) goto LAB_0126fd8c;
        uVar7 = uVar5 + 1;
        *(uint *)(param_2 + 0x14) = uVar7;
        uVar6 = uVar4;
        if (uVar4 < uVar7) {
          uVar6 = uVar7;
        }
        if (uVar7 < uVar4) {
          iVar3 = *(int *)(param_2 + 0xc);
          cVar1 = *(char *)(iVar3 + uVar7);
          uVar4 = uVar5 + 2;
          *(uint *)(param_2 + 0x14) = uVar4;
          if (cVar1 == 'u') {
            if (uVar4 == uVar6) goto LAB_0126ff50;
            cVar1 = *(char *)(iVar3 + uVar4);
            uVar4 = uVar5 + 3;
            *(uint *)(param_2 + 0x14) = uVar4;
            if (cVar1 == 'l') {
              if (uVar4 == uVar6) goto LAB_0126ff50;
              cVar1 = *(char *)(iVar3 + uVar4);
              *(uint *)(param_2 + 0x14) = uVar5 + 4;
              uVar2 = 0;
              if (cVar1 == 'l') goto LAB_0126fed0;
            }
          }
          local_30[0] = 9;
        }
        else {
LAB_0126ff50:
          local_30[0] = 5;
        }
        local_38 = FUN_005b8c9c(param_2,local_30);
        goto LAB_0126fec4;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar5;
    } while (uVar4 != uVar5);
  }
  else {
LAB_0126fd8c:
    if (uVar5 < uVar4) {
LAB_0126fd98:
      uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
      switch(uVar6) {
      case 9:
      case 10:
      case 0xd:
      case 0x20:
        goto switchD_0126fdb0_caseD_9;
      default:
        if (uVar6 - 0x30 < 10) {
          uVar2 = 1;
          goto LAB_0126fea4;
        }
        uVar2 = FUN_0126ecc0(param_2,&uStack_19,&DAT_0188b540);
        break;
      case 0x2d:
        *(uint *)(param_2 + 0x14) = uVar5 + 1;
        uVar2 = 0;
LAB_0126fea4:
        FUN_0134d6c8(&local_40,param_2,uVar2);
        if (local_40 == 3 && local_3c == 0) goto LAB_0126fec4;
        if (local_40 == 1) {
LAB_0126ff8c:
          param_1[2] = local_38;
          param_1[3] = iStack_34;
          *param_1 = 1;
          param_1[1] = 0;
          return;
        }
        if (local_40 == 2) {
          if (-1 < iStack_34) goto LAB_0126ff8c;
          local_28 = local_38;
          local_30[0] = CONCAT31(local_30[0]._1_3_,2);
          local_24 = iStack_34;
          uVar2 = FUN_0157cd6c(local_30,&uStack_19,&DAT_0188b540);
        }
        else {
          local_24 = iStack_34;
          local_28 = local_38;
          local_30[0] = CONCAT31(local_30[0]._1_3_,3);
          uVar2 = FUN_0157cc00(local_30,&uStack_19,&DAT_0188b540);
        }
      }
      local_38 = FUN_00e959bc(uVar2,param_2);
      goto LAB_0126fec4;
    }
  }
LAB_0126fe58:
  local_30[0] = 5;
  local_38 = FUN_008f9984(param_2,local_30);
LAB_0126fec4:
  param_1[2] = local_38;
  uVar2 = 2;
LAB_0126fed0:
  *param_1 = uVar2;
  param_1[1] = 0;
  return;
switchD_0126fdb0_caseD_9:
  uVar5 = uVar5 + 1;
  *(uint *)(param_2 + 0x14) = uVar5;
  if (uVar4 == uVar5) goto LAB_0126fe58;
  goto LAB_0126fd98;
}

