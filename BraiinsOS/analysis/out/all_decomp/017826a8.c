// FUN_017826a8 @ 017826a8 size=912 calls_out=9 calls_in=4
// strings: /aws-lc/crypto/ube/ube.c

void FUN_017826a8(uint *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  bool bVar6;
  longlong lVar7;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [3];
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  if (param_1 == (uint *)0x0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/ube/ube.c",199);
    uVar4 = extraout_r1_03;
  }
  else {
    FUN_01781ff4(&DAT_018dffa8,FUN_01782554);
    if (DAT_018dff61 == '\x01') {
      uVar4 = extraout_r1;
      if (DAT_018dff60 == '\x01') goto LAB_01782738;
    }
    else {
      lVar1 = 0;
      local_20[0] = 0;
      if (DAT_018dff60 == '\x01') {
LAB_01782738:
        local_20[0] = 0;
        FUN_01781f34(&DAT_018dff64);
        bVar6 = false;
        lVar1 = CONCAT44(DAT_018dff5c,DAT_018dff58);
        FUN_01781f94(&DAT_018dff64);
      }
      else {
        lVar7 = FUN_017823b4();
        bVar6 = lVar7 == 0;
        if (!bVar6) {
          lVar1 = lVar7;
        }
      }
      if (DAT_018dff60 == '\x01') {
        FUN_01781f34();
        local_20[0] = DAT_018dff50;
        FUN_01781f94(&DAT_018dff64);
      }
      else {
        iVar2 = FUN_01782ab4(local_20);
        if (iVar2 == 0) {
          bVar6 = true;
        }
      }
      if (!bVar6) {
        FUN_01781f34();
        uVar5 = DAT_018dff3c;
        if ((lVar1 == CONCAT44(DAT_018dff44,DAT_018dff40)) && (DAT_018dff48 == local_20[0])) {
          *param_1 = DAT_018dff38;
          param_1[1] = uVar5;
          FUN_01781f94(&DAT_018dff84);
          uVar4 = extraout_r1_00;
        }
        else {
          FUN_01781f94();
          FUN_01781f64(&DAT_018dff84);
          if (DAT_018dff60 == '\x01') {
            FUN_01781f34();
            lVar7 = CONCAT44(DAT_018dff5c,DAT_018dff58);
            FUN_01781f94(&DAT_018dff64);
          }
          else {
            lVar7 = FUN_017823b4();
            if (lVar7 == 0) {
              bVar6 = true;
              lVar7 = lVar1;
            }
          }
          local_24 = (undefined4)((ulonglong)lVar7 >> 0x20);
          local_28 = (undefined4)lVar7;
          if (DAT_018dff60 == '\x01') {
            FUN_01781f34();
            local_20[0] = DAT_018dff50;
            FUN_01781f94(&DAT_018dff64);
          }
          else {
            iVar2 = FUN_01782ab4(local_20);
            if (iVar2 == 0) {
              bVar6 = true;
            }
          }
          uVar5 = DAT_018dff3c;
          if (bVar6) {
            FUN_01781ff4(&DAT_018dffa4,&LAB_01782524);
            FUN_01781fc4(&DAT_018dff84);
            uVar4 = extraout_r1_04;
            goto LAB_0178290c;
          }
          if ((lVar7 == CONCAT44(DAT_018dff44,DAT_018dff40)) && (local_20[0] == DAT_018dff48)) {
            *param_1 = DAT_018dff38;
            param_1[1] = uVar5;
            FUN_01781fc4(&DAT_018dff84);
            uVar4 = extraout_r1_05;
          }
          else {
            bVar6 = 0xfffffffe < DAT_018dff38;
            DAT_018dff38 = DAT_018dff38 + 1;
            uVar5 = DAT_018dff3c + bVar6;
            DAT_018dff44 = local_24;
            DAT_018dff40 = local_28;
            DAT_018dff48 = local_20[0];
            DAT_018dff3c = uVar5;
            *param_1 = DAT_018dff38;
            param_1[1] = uVar5;
            FUN_01781fc4(&DAT_018dff84);
            uVar4 = extraout_r1_01;
          }
        }
        uVar3 = 1;
        goto LAB_01782910;
      }
      FUN_01781ff4(&DAT_018dffa4,&LAB_01782524);
      uVar4 = extraout_r1_02;
    }
  }
LAB_0178290c:
  uVar3 = 0;
LAB_01782910:
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,uVar4,local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

