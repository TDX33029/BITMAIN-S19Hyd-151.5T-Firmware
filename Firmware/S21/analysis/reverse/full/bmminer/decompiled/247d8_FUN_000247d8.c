// FUN_000247d8 @ 000247d8  size=1148  callers=1
// program: bmminer


uint FUN_000247d8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *param3;
  uint uVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 extraout_s1;
  double dVar6;
  undefined4 extraout_s1_00;
  double dVar7;
  double dVar8;
  char local_2030 [24];
  undefined4 local_2018;
  undefined4 local_2014;
  uint local_2010;
  undefined2 local_200c;
  
  uVar2 = FUN_00075324();
  iVar3 = FUN_0002c3f4();
  if ((iVar3 != 0) && (iVar3 = FUN_0002c434(), iVar3 != 0)) {
    uVar2 = FUN_0002c59c();
  }
  if (3 < DAT_000be63c) {
    snprintf(local_2030,0x2000,"power type version: 0x%04x\n",uVar2);
    FUN_0004948c(3,local_2030,0);
  }
  DAT_000c0428 = uVar2;
  iVar3 = FUN_0002ad6c(uVar2 & 0xffff);
  if (iVar3 == 0) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2030,"power type version error",0x18);
      local_2018 = CONCAT22(local_2018._2_2_,10);
      FUN_0004948c(3,local_2030,0);
      return 0xffffffff;
    }
  }
  else {
    if (DAT_000c0428 - 100 < 3) {
      uVar2 = FUN_00074afc(0);
      if (DAT_000be63c < 4) {
        if (uVar2 != 0) {
          return uVar2;
        }
      }
      else {
        snprintf(local_2030,0x2000,"disable power watchdog: 0x%04x\n",uVar2);
        FUN_0004948c(3,local_2030,0);
        if (uVar2 != 0) {
          if (DAT_000be63c < 4) {
            return uVar2;
          }
          snprintf(local_2030,0x2000,"%s power disable watchdog error.\n","power_init");
          FUN_0004948c(3,local_2030,0);
          return uVar2;
        }
      }
      sleep(1);
    }
    if (3 < DAT_000be63c) {
      memcpy(local_2030,"Initializing the power, please wait, this may take up to 2 minutes...\n",
             0x47);
      FUN_0004948c(3,local_2030,0);
    }
    FUN_00024584();
    FUN_0002460c();
    uVar2 = FUN_000246cc(param_1,3);
    if (uVar2 != 0) {
      return uVar2;
    }
    FUN_00064ddc();
    sleep(1);
    DAT_000c0418 = 1;
    sleep(2);
    if (DAT_000c0428 - 100 < 3) {
      iVar3 = 3;
      do {
        sleep(1);
        uVar5 = FUN_000243f0(0,1);
        uVar2 = in_fpscr & 0xfffffff;
        if ((double)CONCAT44(extraout_s1,uVar5) < 0.0) {
          if (3 < DAT_000be63c) {
            builtin_strncpy(local_2030,"read_feedback_voltage fa",0x18);
            local_2018._0_1_ = 'i';
            local_2018._1_1_ = 'l';
            local_2018._2_1_ = 'e';
            local_2018._3_1_ = 'd';
            local_2014._0_1_ = '!';
            local_2014._1_1_ = '\0';
            FUN_0004948c(3,local_2030,0);
          }
          uVar2 = 0;
          FUN_0004e8c8(9,"power voltage read failed, pls check!");
          goto LAB_00024948;
        }
        dVar6 = (double)CONCAT44(extraout_s1,uVar5) * 100.0;
        dVar8 = (double)VectorSignedToFloat(param_1,(byte)(uVar2 >> 0x16) & 3);
        dVar7 = dVar8 * 1.1;
        uVar4 = uVar2 | (uint)(dVar6 < dVar7) << 0x1f | (uint)(dVar6 == dVar7) << 0x1e;
        in_fpscr = uVar4 | (uint)(NAN(dVar6) || NAN(dVar7)) << 0x1c;
        bVar1 = (byte)(uVar4 >> 0x18);
        if (((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
           (in_fpscr = uVar2, dVar8 * 0.9 <= dVar6)) {
          uVar2 = 0;
          goto LAB_00024948;
        }
        param3 = "drop";
        if (3 < DAT_000be63c) {
          dVar8 = dVar6 - dVar8;
          uVar2 = in_fpscr & 0xfffffff | (uint)(dVar8 < 0.0) << 0x1f | (uint)(dVar8 == 0.0) << 0x1e;
          in_fpscr = uVar2 | (uint)NAN(dVar8) << 0x1c;
          bVar1 = (byte)(uVar2 >> 0x18);
          if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            param3 = "rise";
          }
          snprintf(local_2030,0x2000,"chain avg vol %s from %d to %.2f",param3,param_1,dVar6);
          FUN_0004948c(3,local_2030,0);
          if (3 < DAT_000be63c) {
            builtin_strncpy(local_2030,"power voltage can not me",0x18);
            local_2018._0_1_ = 'e';
            local_2018._1_1_ = 't';
            local_2018._2_1_ = ' ';
            local_2018._3_1_ = 't';
            local_2014._0_1_ = 'h';
            local_2014._1_1_ = 'e';
            local_2014._2_1_ = ' ';
            local_2014._3_1_ = 't';
            local_2010._0_1_ = 'a';
            local_2010._1_1_ = 'r';
            local_2010._2_1_ = 'g';
            local_2010._3_1_ = 'e';
            local_200c = 0x74;
            FUN_0004948c(3,local_2030,0);
          }
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar2 = 0xffffffff;
LAB_00024948:
      uVar4 = 0;
      do {
        iVar3 = FUN_000740e4();
        uVar4 = uVar4 + 1;
        if (iVar3 == 0) {
          return uVar2;
        }
        if ((uVar4 % 5 == 0) && (3 < DAT_000be63c)) {
          builtin_strncpy(local_2030,"bitmain_get_power_status",0x18);
          local_2018._0_1_ = ' ';
          local_2018._1_1_ = 'f';
          local_2018._2_1_ = 'a';
          local_2018._3_1_ = 'i';
          local_2014._0_1_ = 'l';
          local_2014._1_1_ = 'e';
          local_2014._2_1_ = 'd';
          local_2014._3_1_ = '!';
          local_2010 = local_2010 & 0xffffff00;
          FUN_0004948c(3,local_2030,0);
        }
        sleep(3);
      } while (uVar4 != 0x14);
    }
    else {
      dVar6 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      iVar3 = 3;
      do {
        sleep(1);
        uVar5 = FUN_00024490();
        if ((dVar6 * 0.75) / 100.0 <= (double)CONCAT44(extraout_s1_00,uVar5)) {
          return 0;
        }
        if (3 < DAT_000be63c) {
          snprintf(local_2030,0x2000,"power voltage can not meet the target, retry:%d",iVar3);
          FUN_0004948c(3,local_2030,0);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return 0xffffffff;
}

