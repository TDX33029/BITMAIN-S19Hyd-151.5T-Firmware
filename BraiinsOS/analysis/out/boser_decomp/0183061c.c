// FUN_0183061c @ 0183061c size=1220 calls_out=20 calls_in=3
// strings: has_authority means set_username shouldn't fail | has_authority means set_password shouldn't fail

void FUN_0183061c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 ***pppuVar5;
  undefined *puVar6;
  int **ppiVar7;
  undefined8 uVar8;
  undefined4 **local_620;
  int local_61c;
  undefined1 auStack_5e0 [20];
  int local_5cc;
  uint local_5c8;
  uint local_5c0;
  undefined4 local_568;
  undefined4 **local_55c;
  undefined4 local_558;
  int iStack_554;
  int **local_550;
  undefined4 *puStack_54c;
  undefined4 uStack_548;
  int **local_490;
  undefined4 *puStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined1 local_480;
  undefined2 local_47f;
  undefined1 local_47d;
  int **local_478;
  undefined4 *local_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  char local_468;
  undefined2 local_467;
  undefined1 local_465;
  undefined4 ***local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined *local_6c;
  undefined2 uStack_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined4 ***local_58;
  undefined1 *local_54;
  int **local_50;
  undefined4 *local_4c;
  int local_48;
  undefined4 uStack_44;
  int **local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  
  local_568 = param_2;
  FUN_01bed4e2(&local_620,param_3,0xb8);
  if (local_620 != (undefined4 **)0x3 || local_61c != 0) {
    if (local_5c0 != 0) {
      if (local_5c0 < local_5c8) {
        if (*(char *)(local_5cc + local_5c0) < -0x40) {
LAB_01830684:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514();
        }
      }
      else if (local_5c8 != local_5c0) goto LAB_01830684;
    }
    if ((2 < local_5c8 - local_5c0) &&
       (iVar3 = thunk_FUN_01bed842(&DAT_005327c5,local_5cc + local_5c0,3), iVar3 == 0)) {
      uVar8 = FUN_01ac9d2c(auStack_5e0);
      FUN_01655afc(&local_478,(int)uVar8,(int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
      if (local_478 != (int **)&DAT_80000001) {
        local_490 = local_478;
        puStack_48c = local_474;
        uStack_488 = local_470;
        FUN_00666914(&local_50,&local_490);
        uVar8 = FUN_01ac9c00(auStack_5e0);
        iVar3 = (int)uVar8;
        bVar1 = true;
        if (iVar3 == 0) {
          ppiVar7 = (int **)&DAT_80000000;
        }
        else {
          FUN_01655afc(&local_478,iVar3,iVar3 + (int)((ulonglong)uVar8 >> 0x20));
          if (local_478 != (int **)&DAT_80000001) {
            local_550 = local_478;
            puStack_54c = local_474;
            uStack_548 = local_470;
            if (local_478 != (int **)&DAT_80000001) {
              FUN_00666914(&local_40,&local_550);
              bVar1 = local_40 == (int **)&DAT_80000000;
              ppiVar7 = local_40;
              goto LAB_018307a0;
            }
          }
          local_40 = (int **)&DAT_80000000;
          ppiVar7 = (int **)&DAT_80000000;
        }
LAB_018307a0:
        if ((local_48 == 0) && (bVar1)) {
          FUN_019bb7e0(local_50,local_4c);
        }
        else {
          iVar3 = FUN_01ac91f4(auStack_5e0);
          if (iVar3 != 0) {
            puVar6 = &DAT_01d1e4e0;
            pcVar4 = "has_authority means set_username shouldn\'t fail";
LAB_01830a8c:
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(pcVar4,0x2f,&local_58,&DAT_01d1e3c4,puVar6);
          }
          iVar3 = FUN_01ac9018(auStack_5e0);
          puVar2 = local_3c;
          if (iVar3 != 0) {
            puVar6 = &DAT_01d1e4f0;
            pcVar4 = "has_authority means set_password shouldn\'t fail";
            goto LAB_01830a8c;
          }
          if (local_50 != (undefined4 **)0x80000000) {
            local_55c = local_50;
            local_558 = local_4c;
            iStack_554 = local_48;
            FUN_01bed4e2(&local_550,&local_620,0xc0);
            local_4c = (undefined4 *)thunk_FUN_01be5118(6);
            if (local_4c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,6);
            }
            local_50 = (int **)&DAT_00000006;
            *local_4c = 0x69736142;
            *(undefined2 *)(local_4c + 1) = 0x2063;
            local_48 = 6;
            uStack_68 = 0;
            local_66 = 0;
            FUN_01bed93e(&local_478,0,0x400);
            local_6c = &DAT_0051cfcc;
            local_40 = (int **)&local_55c;
            local_65 = 0;
            local_70 = 0;
            local_74 = 0;
            local_3c = (undefined4 *)&LAB_00632348;
            local_78 = &local_50;
            FUN_014453d8(&local_58,&local_478,&DAT_005888c1,&local_40);
            FUN_0188dc98((uint)local_58 & 0xff,local_54);
            if (ppiVar7 != (int **)&DAT_80000000) {
              local_54 = &LAB_00632348;
              local_58 = &local_40;
              local_40 = ppiVar7;
              local_3c = puVar2;
              FUN_014453d8(local_60,&local_478,&DAT_00590e5f,&local_58);
              FUN_0188dc98(local_60[0],local_5c);
              FUN_019bb7e0(local_40,local_3c);
            }
            FUN_01445844(&local_478);
            local_478 = local_50;
            local_474 = local_4c;
            local_470 = local_48;
            FUN_01283524(&local_40,&local_478);
            FUN_01429274(&local_478,&local_40);
            if (local_468 == '\x02') {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_0051d10f,0x22,&local_58,&DAT_01d210e8,&DAT_01d21134);
            }
            local_490 = local_478;
            puStack_48c = local_474;
            uStack_488 = local_470;
            uStack_484 = uStack_46c;
            local_47d = local_465;
            local_47f = local_467;
            local_480 = 1;
            FUN_019bb7e0(local_55c,local_558);
            FUN_01bed4e2(&local_478,&local_550,0xc0);
            if (local_478 == (int **)&DAT_00000003 && local_474 == (undefined4 *)0x0) {
              FUN_01bed4e2(param_1,&local_550,0xc0);
              (*(code *)local_490[4])(&uStack_484,puStack_48c,uStack_488);
              return;
            }
            local_50 = (undefined4 **)0x0;
            local_4c = (undefined4 *)0x10;
            local_48 = 0;
            uStack_44 = 0;
            local_40 = local_490;
            local_3c = puStack_48c;
            local_38 = uStack_488;
            uStack_34 = uStack_484;
            local_30 = 1;
            local_2f = local_47f;
            local_2d = local_47d;
            FUN_0137f69c(&local_478,&local_50,&local_40);
            pppuVar5 = &local_478;
            goto LAB_018307f4;
          }
        }
      }
    }
  }
  pppuVar5 = &local_620;
LAB_018307f4:
  FUN_01bed4e2(param_1,pppuVar5,0xc0);
  return;
}

