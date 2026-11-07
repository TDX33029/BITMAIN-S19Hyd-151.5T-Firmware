// FUN_00bad3b8 @ 00bad3b8 size=708 calls_out=10 calls_in=1
// strings: a Display implementation returned an error unexpectedly

void FUN_00bad3b8(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  int local_88 [5];
  undefined4 local_74;
  undefined1 local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_48;
  int local_44;
  int local_40;
  int local_38 [5];
  
  if ((9 < param_3) && (iVar2 = thunk_FUN_016dd50a(&DAT_0034fb18,param_2,10), iVar2 == 0)) {
    local_88[0] = 0x60;
    pbVar10 = (byte *)0x0;
    local_74 = 0x60;
    iVar2 = 1;
    iVar7 = param_3 - 10;
    param_2 = param_2 + 10;
    local_88[3] = 0;
    local_70 = 1;
    local_88[1] = param_2;
    local_88[2] = iVar7;
    local_88[4] = iVar7;
    FUN_0062a644(&local_48,local_88);
    iVar1 = local_44;
    if (local_48 == 1) {
      uVar11 = FUN_010ceb84(param_2 + local_40,iVar7 - local_40);
      iVar6 = (int)((ulonglong)uVar11 >> 0x20);
      pbVar9 = (byte *)uVar11;
      iVar7 = 0;
      if (iVar6 != 0) {
        pbVar10 = pbVar9 + 1;
        uVar5 = (uint)*pbVar9;
        if (0x7fffffff < (uint)(int)(char)*pbVar9) {
          if (uVar5 < 0xe0) {
            uVar5 = pbVar9[1] & 0x3f | (uVar5 & 0x1f) << 6;
            pbVar10 = pbVar9 + 2;
          }
          else {
            uVar8 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
            if (uVar5 < 0xf0) {
              uVar5 = uVar8 | (uVar5 & 0x1f) << 0xc;
              pbVar10 = pbVar9 + 3;
            }
            else {
              pbVar10 = pbVar9 + 4;
              uVar5 = pbVar9[3] & 0x3f | uVar8 << 6 | (uVar5 & 7) << 0x12;
            }
          }
        }
        FUN_00fb77b8(&local_58,uVar5);
        iVar2 = 2;
        if (iStack_54 == 0) {
          iVar2 = 1;
        }
        local_88[2] = local_58;
        local_88[3] = iStack_54;
        local_88[4] = iStack_50;
        if (iStack_50 != 0) {
          iVar2 = 3;
        }
        iVar7 = -2;
        local_40 = 0;
        local_48 = 0;
        local_44 = 1;
        do {
          local_38[-iVar7] = local_88[-iVar7];
          iVar7 = iVar7 + -1;
        } while (iVar2 + iVar7 != -2);
        iVar7 = 0;
        local_38[0] = 0;
        local_38[1] = iVar2;
        while (iVar2 != iVar7) {
          iVar3 = FUN_00b24d94(&local_48,local_38[iVar7 + 2]);
          iVar7 = iVar7 + 1;
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_68,
                         &DAT_01870fac,&DAT_018af130);
          }
        }
        pbVar9 = pbVar9 + (iVar6 - (int)pbVar10);
        local_64 = local_44;
        local_60 = local_40;
        local_68 = local_48;
        if ((byte *)(local_48 - local_40) < pbVar9) {
          FUN_00d653ec(&local_68,local_40,pbVar9,1,1);
        }
        iVar6 = local_60;
        iVar2 = local_64;
        iVar7 = local_68;
        FUN_016dd1aa(local_64 + local_60,pbVar10,pbVar9);
        pbVar10 = pbVar9 + iVar6;
      }
      if (iVar1 < 0) {
        uVar4 = 0;
LAB_00bad5fc:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar4,iVar1);
      }
      if (iVar1 == 0) {
        iVar3 = 1;
        iVar6 = 0;
      }
      else {
        iVar3 = thunk_FUN_016d4a50(iVar1);
        if (iVar3 == 0) {
          uVar4 = 1;
          goto LAB_00bad5fc;
        }
        iVar6 = iVar1;
      }
      FUN_016dd1aa(iVar3,param_2,iVar1);
      *param_1 = iVar6;
      param_1[1] = iVar3;
      param_1[2] = iVar1;
      param_1[3] = iVar7;
      param_1[4] = iVar2;
      param_1[5] = (int)pbVar10;
      return;
    }
  }
  *param_1 = -0x80000000;
  return;
}

