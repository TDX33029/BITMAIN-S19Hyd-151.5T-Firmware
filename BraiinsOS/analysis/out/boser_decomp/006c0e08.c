// FUN_006c0e08 @ 006c0e08 size=500 calls_out=6 calls_in=1
// strings: include

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_006c0e08(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  uint local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if (param_2 != 0) {
    iVar5 = param_1 + param_2 * 0x24;
    do {
      iVar4 = *(int *)(param_1 + 0x20);
      piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 8);
      if (iVar4 == 4) {
        if (*piVar1 == 0x70696b73) {
LAB_006c0ea0:
          iVar2 = *(int *)(param_1 + 0xc);
          for (iVar3 = *(int *)(param_1 + 0x10) * 0x48; iVar3 != 0; iVar3 = iVar3 + -0x48) {
            if ((*(int *)(iVar2 + 0xc) == 2) && (*(short *)(*(int *)(iVar2 + 8) + 8) == 0x6669)) {
              FUN_006c1008(&local_58,iVar2 + 0x18);
              local_28 = param_3;
              FUN_006dd5d8(&local_88,&local_58,&local_28);
              local_48 = -0x80000000;
              if (local_78 != -0x7ffffff9) {
                local_98 = local_88;
                uStack_94 = local_84;
                uStack_90 = uStack_80;
                uStack_8c = uStack_7c;
                local_b8 = local_74;
                uStack_b4 = uStack_70;
                uStack_b0 = uStack_6c;
                local_ac = local_68;
                uStack_a8 = uStack_64;
                uStack_a4 = uStack_60;
                uStack_a0 = uStack_5c;
                local_48 = local_78;
              }
              local_58 = local_98;
              uStack_54 = uStack_94;
              uStack_50 = uStack_90;
              uStack_4c = uStack_8c;
              local_44 = local_b8;
              uStack_40 = uStack_b4;
              uStack_3c = uStack_b0;
              local_38 = local_ac;
              uStack_34 = uStack_a8;
              uStack_30 = uStack_a4;
              uStack_2c = uStack_a0;
              FUN_006dec3c(&local_88);
              iVar3 = local_88;
              if (local_88 == 2) {
                if ((uint)(iVar4 == 4) != (local_84 & 0xff)) break;
              }
              else {
                FUN_019bb7e0(local_78,local_74);
                if (iVar3 != 0) {
                  FUN_006c1148(&local_84);
                }
                if (iVar4 == 4) break;
              }
              return 1;
            }
            iVar2 = iVar2 + 0x48;
          }
        }
      }
      else if ((iVar4 == 7) && (iVar3 = thunk_FUN_01bed842(piVar1,"include",7), iVar3 == 0))
      goto LAB_006c0ea0;
      param_1 = param_1 + 0x24;
    } while (param_1 != iVar5);
  }
  return 0;
}

