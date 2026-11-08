// FUN_00b8e264 @ 00b8e264 size=788 calls_out=2 calls_in=1
// strings: 

void FUN_00b8e264(uint *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  byte *pbStack_64;
  uint uStack_60;
  undefined1 local_5c;
  undefined2 local_48;
  undefined1 local_46;
  byte *local_44;
  uint local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_1[6];
  uVar8 = param_1[7];
  if (uVar7 == uVar2 && uVar8 == uVar4) {
    pbStack_64 = (byte *)param_1[9];
    uStack_60 = param_1[10];
    bVar9 = uStack_60 != 0;
    uVar2 = 0;
    local_44 = (byte *)param_1[3];
    local_40 = param_1[4];
    uVar4 = 0;
    if (bVar9) {
      uVar2 = (uint)*pbStack_64;
    }
    local_48 = 0x201;
    if (bVar9) {
      uVar2 = LZCOUNT(uVar2 - 0x2f);
    }
    local_28 = 0x201;
    if (bVar9) {
      uVar2 = uVar2 >> 5;
    }
    bVar9 = local_40 != 0;
    local_46 = (undefined1)uVar2;
    if (bVar9) {
      uVar4 = *local_44 - 0x2f;
    }
    local_5c = 6;
    if (bVar9) {
      uVar4 = LZCOUNT(uVar4);
    }
    local_3c = 6;
    if (bVar9) {
      uVar4 = uVar4 >> 5;
    }
    local_26 = (undefined1)uVar4;
    cVar1 = FUN_019af7b8(&pbStack_64,&local_44);
    if (cVar1 < '\0') {
LAB_00b8e400:
      uVar2 = 2;
      iVar5 = 0;
      do {
        uVar4 = *(uint *)((int)param_1 + iVar5 + 0x30);
        uVar6 = *(uint *)((int)param_1 + iVar5 + 0x34);
        if (uVar4 == uVar7 && uVar6 == uVar8) {
          pbStack_64 = *(byte **)((int)param_1 + iVar5 + 0x3c);
          uStack_60 = *(uint *)((int)param_1 + iVar5 + 0x40);
          bVar9 = uStack_60 != 0;
          uVar7 = 0;
          if (bVar9) {
            uVar7 = (uint)*pbStack_64;
          }
          local_40 = *(uint *)((int)param_1 + iVar5 + 0x28);
          if (bVar9) {
            uVar7 = uVar7 - 0x2f;
          }
          local_44 = *(byte **)((int)param_1 + iVar5 + 0x24);
          if (bVar9) {
            uVar7 = LZCOUNT(uVar7);
          }
          local_5c = 6;
          if (bVar9) {
            uVar7 = uVar7 >> 5;
          }
          bVar9 = local_40 != 0;
          local_46 = (undefined1)uVar7;
          uVar7 = 0x201;
          local_48 = 0x201;
          if (bVar9) {
            uVar7 = (uint)*local_44;
          }
          local_28 = 0x201;
          if (bVar9) {
            uVar7 = uVar7 - 0x2f;
          }
          local_3c = 6;
          local_26 = bVar9 && uVar7 == 0;
          cVar1 = FUN_019af7b8(&pbStack_64,&local_44);
          if ((uint)(int)cVar1 < 0x80000000) {
LAB_00b8e4e8:
            bVar9 = true;
            goto LAB_00b8e4ec;
          }
        }
        else if ((int)(uVar6 - (uVar8 + (uVar4 < uVar7))) < 0 ==
                 (SBORROW4(uVar6,uVar8) != SBORROW4(uVar6 - uVar8,(uint)(uVar4 < uVar7))))
        goto LAB_00b8e4e8;
        iVar5 = iVar5 + 0x18;
        uVar2 = uVar2 + 1;
        uVar7 = uVar4;
        uVar8 = uVar6;
      } while (param_2 * 0x18 + -0x30 != iVar5);
LAB_00b8e500:
      uVar7 = 0;
      puVar3 = param_1 + param_2 * 6;
      do {
        puVar3 = puVar3 + -6;
        iVar5 = 0;
        do {
          uVar8 = param_1[-iVar5];
          param_1[-iVar5] = puVar3[-iVar5];
          puVar3[-iVar5] = uVar8;
          bVar9 = iVar5 != -5;
          iVar5 = iVar5 + -1;
        } while (bVar9);
        uVar7 = uVar7 + 1;
        param_1 = param_1 + 6;
      } while (uVar7 != param_2 >> 1);
      return;
    }
  }
  else if ((int)(uVar8 - (uVar4 + (uVar7 < uVar2))) < 0 !=
           (SBORROW4(uVar8,uVar4) != SBORROW4(uVar8 - uVar4,(uint)(uVar7 < uVar2))))
  goto LAB_00b8e400;
  uVar2 = 2;
  iVar5 = 0;
  do {
    uVar4 = *(uint *)((int)param_1 + iVar5 + 0x30);
    uVar6 = *(uint *)((int)param_1 + iVar5 + 0x34);
    if (uVar4 == uVar7 && uVar6 == uVar8) {
      pbStack_64 = *(byte **)((int)param_1 + iVar5 + 0x3c);
      uStack_60 = *(uint *)((int)param_1 + iVar5 + 0x40);
      bVar9 = uStack_60 != 0;
      uVar7 = 0;
      uVar8 = 0;
      if (bVar9) {
        uVar7 = (uint)*pbStack_64;
      }
      local_40 = *(uint *)((int)param_1 + iVar5 + 0x28);
      if (bVar9) {
        uVar7 = uVar7 - 0x2f;
      }
      local_44 = *(byte **)((int)param_1 + iVar5 + 0x24);
      if (bVar9) {
        uVar7 = LZCOUNT(uVar7);
      }
      local_5c = 6;
      if (bVar9) {
        uVar7 = uVar7 >> 5;
      }
      bVar9 = local_40 != 0;
      local_46 = (undefined1)uVar7;
      if (bVar9) {
        uVar8 = *local_44 - 0x2f;
      }
      local_48 = 0x201;
      if (bVar9) {
        uVar8 = LZCOUNT(uVar8);
      }
      local_3c = 6;
      if (bVar9) {
        uVar8 = uVar8 >> 5;
      }
      local_28 = 0x201;
      local_26 = (undefined1)uVar8;
      cVar1 = FUN_019af7b8(&pbStack_64,&local_44);
      if (cVar1 < '\0') {
LAB_00b8e4e0:
        bVar9 = false;
LAB_00b8e4ec:
        if (uVar2 != param_2) {
          FUN_00b904d4(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
          return;
        }
        if (!bVar9) {
          return;
        }
        goto LAB_00b8e500;
      }
    }
    else if ((int)(uVar6 - (uVar8 + (uVar4 < uVar7))) < 0 !=
             (SBORROW4(uVar6,uVar8) != SBORROW4(uVar6 - uVar8,(uint)(uVar4 < uVar7))))
    goto LAB_00b8e4e0;
    iVar5 = iVar5 + 0x18;
    uVar2 = uVar2 + 1;
    uVar7 = uVar4;
    uVar8 = uVar6;
    if (param_2 * 0x18 + -0x30 == iVar5) {
      return;
    }
  } while( true );
}

