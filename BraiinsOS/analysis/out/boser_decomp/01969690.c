// FUN_01969690 @ 01969690 size=996 calls_out=18 calls_in=2
// strings: 

void FUN_01969690(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int local_c0;
  undefined1 local_bc;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_bc = 1;
  local_c0 = param_2;
  FUN_01965d20(&local_40,&local_c0);
  iVar6 = local_c0;
  if ((char)local_40 == '\x01') {
    iVar4 = local_3c;
  }
  else {
    if (local_40._1_1_ != '\x01') {
      param_1[3] = 0;
      param_1[1] = 0;
      cVar3 = '\x05';
      goto LAB_0196974c;
    }
    piVar9 = (int *)(local_c0 + 0xc);
    *(undefined4 *)(local_c0 + 8) = 0;
    *(int *)(local_c0 + 0x14) = *(int *)(local_c0 + 0x14) + 1;
    FUN_019686b4(&local_40,piVar9,local_c0);
    iVar4 = local_3c;
    if (local_40 != 2) {
      FUN_01969b9c(&local_58,local_3c,local_38);
      iVar4 = local_54;
      iVar2 = local_58;
      if (local_58 != -0x7fffffff) {
        if (local_58 == -0x80000000) {
          iVar4 = FUN_01965c98(iVar6);
          if (iVar4 == 0) {
            uVar7 = *(uint *)(iVar6 + 0x14);
            if (uVar7 < *(uint *)(iVar6 + 0x10)) {
              iVar4 = *piVar9;
              do {
                uVar8 = *(byte *)(iVar4 + uVar7) - 9;
                if ((0x17 < uVar8) || ((1 << (uVar8 & 0xff) & 0x800013U) == 0)) {
                  if (*(byte *)(iVar4 + uVar7) == 0x22) {
                    *(undefined4 *)(iVar6 + 8) = 0;
                    *(uint *)(iVar6 + 0x14) = uVar7 + 1;
                    FUN_019686b4(&local_40,piVar9,iVar6);
                    iVar4 = local_3c;
                    if (local_40 == 2) goto LAB_019697c4;
                    FUN_0196ad08(&local_58,local_3c,local_38);
                    if (local_58 != 0) {
                      FUN_019664a4(&local_40,local_58,local_54);
                      if ((char)local_40 == '\x06') {
                        iVar6 = FUN_019677a8(local_3c);
                        param_1[1] = iVar6;
                        *(char *)param_1 = '\x06';
                      }
                      else {
                        *param_1 = local_40;
                        param_1[1] = local_3c;
                        param_1[2] = local_38;
                        param_1[3] = local_34;
                        param_1[4] = iStack_30;
                        param_1[5] = iStack_2c;
                      }
                      if (local_54 == 0) {
                        return;
                      }
                      thunk_FUN_01be4678(local_58);
                      return;
                    }
                  }
                  else {
                    local_54 = FUN_019659c8(iVar6,&local_64,&DAT_01d271fc);
                  }
                  iVar4 = FUN_01966f00(local_54,iVar6);
                  goto LAB_01969934;
                }
                uVar7 = uVar7 + 1;
                *(uint *)(iVar6 + 0x14) = uVar7;
              } while (*(uint *)(iVar6 + 0x10) != uVar7);
            }
            local_40 = 5;
            iVar4 = FUN_01964674(iVar6,&local_40);
LAB_01969934:
          }
LAB_019697c4:
          cVar3 = '\x06';
          param_1[1] = iVar4;
          goto LAB_0196974c;
        }
        if (local_58 != -0x7ffffffe) {
          local_b0 = 0;
          local_b8[0] = 0;
          FUN_01965c5c(param_1,&local_c0);
          if ((char)*param_1 == '\x06') {
            FUN_0134bd64(iVar2,iVar4);
          }
          else {
            FUN_0196b484(&local_40,local_b8,&local_58,param_1);
            FUN_01969acc(&local_40);
            puVar5 = (undefined4 *)((uint)&local_a8 | 4);
            piVar9 = (int *)((uint)&local_40 | 4);
            while( true ) {
              FUN_01965be4(&local_64,&local_c0);
              uVar1 = local_5c;
              iVar4 = local_60;
              iVar6 = local_64;
              if (local_64 == -0x7fffffff) break;
              if (local_64 == -0x80000000) {
LAB_019699c8:
                FUN_01bed4e2((uint)&local_40 | 3,local_b8,0xc);
                *(char *)param_1 = '\x05';
                FUN_01bed4e2((char *)((int)param_1 + 1),&local_40,0xf);
                return;
              }
              FUN_01965c5c(&local_58,&local_c0);
              if ((char)local_58 == '\x06') {
                FUN_0134bd64(iVar6,iVar4);
                iVar4 = local_54;
                break;
              }
              *piVar9 = local_58;
              piVar9[1] = local_54;
              piVar9[2] = local_50;
              piVar9[3] = iStack_4c;
              piVar9[4] = iStack_48;
              piVar9[5] = iStack_44;
              local_a8 = local_40;
              iStack_a4 = local_3c;
              iStack_a0 = local_38;
              local_9c = local_34;
              iStack_98 = iStack_30;
              iStack_94 = iStack_2c;
              uStack_90 = uStack_28;
              if (iVar6 == -0x80000000) goto LAB_019699c8;
              if (iVar6 == -0x7fffffff) {
                break;
              }
              local_88 = iVar4;
              local_84 = uVar1;
              local_8c = iVar6;
              local_80 = *puVar5;
              uStack_7c = puVar5[1];
              uStack_78 = puVar5[2];
              uStack_74 = puVar5[3];
              uStack_70 = puVar5[4];
              uStack_6c = puVar5[5];
              FUN_0196b484(&local_40,local_b8,&local_8c);
              FUN_01969acc(&local_40);
            }
            param_1[1] = iVar4;
            *(char *)param_1 = '\x06';
          }
          FUN_0196afa8(local_b8);
          return;
        }
      }
    }
  }
  cVar3 = '\x06';
  param_1[1] = iVar4;
LAB_0196974c:
  *(char *)param_1 = cVar3;
  return;
}

