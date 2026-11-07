// FUN_00944944 @ 00944944 size=636 calls_out=7 calls_in=1
// strings: 

void FUN_00944944(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_30;
  int local_2c;
  undefined4 local_28;
  uint uStack_24;
  undefined1 uStack_19;
  
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < uVar4) {
    do {
      uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
      uVar7 = uVar6 - 9;
      if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
        if (uVar6 == 0x6e) {
          uVar7 = uVar5 + 1;
          *(uint *)(param_2 + 0x14) = uVar7;
          uVar6 = uVar4;
          if (uVar4 < uVar7) {
            uVar6 = uVar7;
          }
          if (uVar7 < uVar4) {
            iVar2 = *(int *)(param_2 + 0xc);
            cVar1 = *(char *)(iVar2 + uVar7);
            uVar4 = uVar5 + 2;
            *(uint *)(param_2 + 0x14) = uVar4;
            if (cVar1 == 'u') {
              if (uVar4 == uVar6) goto LAB_00944bf8;
              cVar1 = *(char *)(iVar2 + uVar4);
              uVar4 = uVar5 + 3;
              *(uint *)(param_2 + 0x14) = uVar4;
              if (cVar1 == 'l') {
                if (uVar4 == uVar6) goto LAB_00944bf8;
                cVar1 = *(char *)(iVar2 + uVar4);
                *(uint *)(param_2 + 0x14) = uVar5 + 4;
                if (cVar1 == 'l') {
                  *param_1 = 0;
                  return;
                }
              }
            }
            local_30 = 9;
          }
          else {
LAB_00944bf8:
            local_30 = 5;
          }
          uVar3 = FUN_005b8c9c(param_2,&local_30);
          param_1[1] = uVar3;
          *param_1 = 2;
          return;
        }
        goto LAB_009449a8;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar5;
    } while (uVar4 != uVar5);
  }
  else {
LAB_009449a8:
    if (uVar5 < uVar4) {
LAB_009449b4:
      uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
      switch(uVar6) {
      case 9:
      case 10:
      case 0xd:
      case 0x20:
        goto switchD_009449cc_caseD_9;
      default:
        if (9 < uVar6 - 0x30) {
          uVar3 = FUN_005b8238(param_2,&uStack_19,&DAT_018673b8);
          local_28 = FUN_00e959bc(uVar3,param_2);
          goto LAB_00944b0c;
        }
        FUN_008fa814(&local_30,param_2,1);
        if (!(local_30 != 3 || local_2c != 0)) goto LAB_00944b0c;
        if (local_30 == 2) goto LAB_00944be0;
        if (local_30 == 1) goto LAB_00944bac;
        break;
      case 0x2d:
        *(uint *)(param_2 + 0x14) = uVar5 + 1;
        FUN_008fa814(&local_30,param_2,0);
        if (!(local_30 != 3 || local_2c != 0)) goto LAB_00944b0c;
        if (local_30 != 0) {
          if (local_30 == 1) {
LAB_00944bac:
            uVar4 = FUN_0184589c();
            goto LAB_00944be4;
          }
LAB_00944be0:
          uVar4 = FUN_01845fc8();
          goto LAB_00944be4;
        }
      }
      uVar4 = 0xbf800000;
      if (uStack_24 < 0x80000000) {
        uVar4 = 0;
      }
      uVar4 = (uint)ABS((float)(double)CONCAT44(uStack_24,local_28)) | uVar4 & 0x80000000;
LAB_00944be4:
      param_1[1] = uVar4;
      *param_1 = 1;
      return;
    }
  }
LAB_00944a74:
  local_30 = 5;
  local_28 = FUN_008f9984(param_2,&local_30);
LAB_00944b0c:
  param_1[1] = local_28;
  *param_1 = 2;
  return;
switchD_009449cc_caseD_9:
  uVar5 = uVar5 + 1;
  *(uint *)(param_2 + 0x14) = uVar5;
  if (uVar4 == uVar5) goto LAB_00944a74;
  goto LAB_009449b4;
}

