// function @ 0111bfa4  size=3000  volt_strings=1
// strings: resultevent open/protocols/stratum/src/v1/rpc.rs:240ii_stratum::v1::rpcopen/protocols/stratum/src/v1/rpc.rsevent open/protocols/stratum/src/v1/rpc.rs:252 | method | mining.set_extranonce | mining.set_difficulty | mining.notify | mining.extranonce.subscribe | mining.submit | mining.ping | mining.set_version_mask | paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended | the enum variant Method::Error cannot be serialized | the enum variant Method::Result cannot be serialized

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0111bfa4(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_4a [2];
  undefined1 auStack_48 [36];
  
  local_60 = param_3;
  local_5c = param_4;
  if ((*param_2 & 1) != 0) {
    (**(code **)(param_4 + 0x1c))(&local_50,param_3,&DAT_004144eb,1);
    if ((char)local_50 != '\x04') goto LAB_0111cd30;
    uVar11 = param_2[0xf];
    FUN_0111f934(&local_50,local_60,*(undefined4 *)(local_5c + 0x1c),"id",2);
    if ((char)local_50 != '\x04') goto LAB_0111cd30;
    (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_00418eb8,1);
    if ((char)local_50 != '\x04') goto LAB_0111cd30;
    iVar7 = 10;
    if (uVar11 < 10000) {
      uVar12 = uVar11;
      if (99 < uVar11) goto LAB_0111c298;
LAB_0111c100:
      if (9 < uVar12) goto LAB_0111c10c;
LAB_0111c2dc:
      iVar7 = iVar7 + -1;
      *(byte *)((int)&local_50 + iVar7) = (byte)uVar12 | 0x30;
    }
    else {
      iVar5 = 0;
      uVar12 = uVar11;
      do {
        iVar7 = iVar5;
        uVar11 = uVar12 / 10000;
        uVar9 = (uint)((short)(uVar12 % 10000 >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)(auStack_4a + iVar7) = *(undefined2 *)(&DAT_0040f4ca + uVar9 * 2);
        *(undefined2 *)(auStack_48 + iVar7) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar12 % 10000 + uVar9 * -100 & 0xffff) * 2);
        bVar1 = 99999999 < uVar12;
        iVar5 = iVar7 + -4;
        uVar12 = uVar11;
      } while (bVar1);
      iVar7 = iVar7 + 6;
      if (uVar11 < 100) goto LAB_0111c100;
LAB_0111c298:
      iVar7 = iVar7 + -2;
      uVar12 = (uint)((short)((uVar11 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)&local_50 + iVar7) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar11 + uVar12 * -100 & 0xffff) * 2);
      if (uVar12 < 10) goto LAB_0111c2dc;
LAB_0111c10c:
      iVar7 = iVar7 + -2;
      *(undefined2 *)((int)&local_50 + iVar7) = *(undefined2 *)(&DAT_0040f4ca + uVar12 * 2);
    }
    (**(code **)(local_5c + 0x1c))(&local_58,local_60,(int)&local_50 + iVar7,10 - iVar7);
    if ((char)local_58 != '\x04') {
LAB_0111cd8c:
      iVar7 = FUN_0157c4a0(local_58,local_54);
      goto LAB_0111cd1c;
    }
    (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_004144ea,1);
    if ((char)local_50 != '\x04') goto LAB_0111cd30;
    FUN_0111f934(&local_50,local_60,*(undefined4 *)(local_5c + 0x1c),
                 "resultevent open/protocols/stratum/src/v1/rpc.rs:240ii_stratum::v1::rpcopen/protocols/stratum/src/v1/rpc.rsevent open/protocols/stratum/src/v1/rpc.rs:252"
                 ,6);
    if ((char)local_50 != '\x04') goto LAB_0111cd30;
    (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_00418eb8,1);
    if ((char)local_50 != '\x04') goto LAB_0111cd30;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((char)param_2[2]) {
    case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_00567318,4);
    iVar7 = 0;
    if ((char)local_50 != '\x04') {
      iVar7 = FUN_0157c4a0(local_50,local_4c);
    }
    if (iVar7 != 0) goto LAB_0111cd1c;
    (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_004144ea,1);
    if ((char)local_50 != '\x04') goto LAB_0111cd30;
    FUN_0111f934(&local_50,local_60,*(undefined4 *)(local_5c + 0x1c),&DAT_00418447,5);
    if ((char)local_50 != '\x04') goto LAB_0111cd30;
    (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_00418eb8,1);
    iVar7 = local_5c;
    uVar6 = local_60;
    if ((char)local_50 != '\x04') goto LAB_0111cd30;
    if (param_2[8] != 0x80000000) {
      pcVar13 = *(code **)(local_5c + 0x1c);
      (*pcVar13)(&local_50,local_60,&DAT_00418df9,1);
      if ((char)local_50 != '\x04') goto LAB_0111cd30;
      iVar5 = 0xb;
      uVar12 = param_2[0xe];
      uVar11 = uVar12;
      if ((int)uVar12 < 0) {
        uVar11 = -uVar12;
      }
      if (uVar11 < 10000) {
        uVar9 = uVar11;
        if (99 < uVar11) goto LAB_0111c7a8;
LAB_0111c764:
        if (9 < uVar9) goto LAB_0111c770;
LAB_0111c7ec:
        iVar5 = iVar5 + -1;
        *(byte *)((int)&local_50 + iVar5) = (byte)uVar9 | 0x30;
      }
      else {
        iVar3 = 0;
        uVar9 = uVar11;
        do {
          iVar5 = iVar3;
          uVar11 = uVar9 / 10000;
          uVar2 = (uint)((short)(uVar9 % 10000 >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)(auStack_4a + iVar5 + 1) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
          *(undefined2 *)(auStack_48 + iVar5 + 1) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar9 % 10000 + uVar2 * -100 & 0xffff) * 2);
          bVar1 = 99999999 < uVar9;
          iVar3 = iVar5 + -4;
          uVar9 = uVar11;
        } while (bVar1);
        iVar5 = iVar5 + 7;
        if (uVar11 < 100) goto LAB_0111c764;
LAB_0111c7a8:
        iVar5 = iVar5 + -2;
        uVar9 = (uint)((short)((uVar11 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)&local_50 + iVar5) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar11 + uVar9 * -100 & 0xffff) * 2);
        if (uVar9 < 10) goto LAB_0111c7ec;
LAB_0111c770:
        iVar5 = iVar5 + -2;
        *(undefined2 *)((int)&local_50 + iVar5) = *(undefined2 *)(&DAT_0040f4ca + uVar9 * 2);
      }
      if (0x7fffffff < uVar12) {
        iVar5 = iVar5 + -1;
        *(undefined1 *)((int)&local_50 + iVar5) = 0x2d;
      }
      (*pcVar13)(&local_58,uVar6,(int)&local_50 + iVar5,0xb - iVar5);
      if ((char)local_58 != '\x04') goto LAB_0111cd8c;
      uVar11 = param_2[9];
      uVar12 = param_2[10];
      (*pcVar13)(&local_50,uVar6,&DAT_004144ea,1);
      if ((char)local_50 == '\x04') {
        pcVar13 = *(code **)(iVar7 + 0x1c);
        FUN_0111f934(&local_50,uVar6,pcVar13,uVar11,uVar12);
        if ((char)local_50 == '\x04') {
          (*pcVar13)(&local_50,uVar6,&DAT_004144ea,1);
          if ((char)local_50 == '\x04') {
            if (param_2[0xb] == 0x80000000) {
              (*pcVar13)(&local_50,uVar6,&DAT_00567318,4);
            }
            else {
              pcVar13 = *(code **)(iVar7 + 0x1c);
              FUN_0111f934(&local_50,uVar6,pcVar13,param_2[0xc],param_2[0xd]);
            }
            if (((char)local_50 != '\x04') && (iVar7 = FUN_0157c4a0(local_50,local_4c), iVar7 != 0))
            goto LAB_0111cd1c;
            uVar10 = 1;
            puVar8 = &DAT_00418ec5;
            goto LAB_0111c918;
          }
        }
      }
      goto LAB_0111cd30;
    }
    pcVar13 = *(code **)(local_5c + 0x1c);
    uVar10 = 4;
    puVar8 = &DAT_00567318;
LAB_0111c918:
    (*pcVar13)(&local_50,uVar6,puVar8,uVar10);
    iVar7 = 0;
    if ((char)local_50 != '\x04') {
      iVar7 = FUN_0157c4a0(local_50,local_4c);
    }
    goto LAB_0111ccdc;
  }
  (**(code **)(param_4 + 0x1c))(&local_50,param_3,&DAT_004144eb,1);
  if ((char)local_50 != '\x04') goto LAB_0111cd30;
  uVar12 = param_2[2];
  uVar11 = param_2[3];
  FUN_0111f934(&local_50,local_60,*(undefined4 *)(local_5c + 0x1c),"id",2);
  if ((char)local_50 != '\x04') goto LAB_0111cd30;
  (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_00418eb8,1);
  if ((char)local_50 != '\x04') goto LAB_0111cd30;
  if ((uVar12 & 1) == 0) {
    (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_00567318,4);
    if ((char)local_50 != '\x04') {
      local_58 = local_50;
      local_54 = local_4c;
      goto LAB_0111cda4;
    }
  }
  else {
    iVar7 = 10;
    if (uVar11 < 10000) {
      uVar12 = uVar11;
      if (99 < uVar11) goto LAB_0111c514;
LAB_0111c268:
      if (9 < uVar12) goto LAB_0111c274;
LAB_0111c550:
      iVar7 = iVar7 + -1;
      *(byte *)((int)&local_50 + iVar7) = (byte)uVar12 | 0x30;
    }
    else {
      iVar5 = 0;
      uVar12 = uVar11;
      do {
        iVar7 = iVar5;
        uVar11 = uVar12 / 10000;
        uVar9 = (uint)((short)(uVar12 % 10000 >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)(auStack_4a + iVar7) = *(undefined2 *)(&DAT_0040f4ca + uVar9 * 2);
        *(undefined2 *)(auStack_48 + iVar7) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar12 % 10000 + uVar9 * -100 & 0xffff) * 2);
        bVar1 = 99999999 < uVar12;
        iVar5 = iVar7 + -4;
        uVar12 = uVar11;
      } while (bVar1);
      iVar7 = iVar7 + 6;
      if (uVar11 < 100) goto LAB_0111c268;
LAB_0111c514:
      iVar7 = iVar7 + -2;
      uVar12 = (uint)((short)((uVar11 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)&local_50 + iVar7) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar11 + uVar12 * -100 & 0xffff) * 2);
      if (uVar12 < 10) goto LAB_0111c550;
LAB_0111c274:
      iVar7 = iVar7 + -2;
      *(undefined2 *)((int)&local_50 + iVar7) = *(undefined2 *)(&DAT_0040f4ca + uVar12 * 2);
    }
    (**(code **)(local_5c + 0x1c))(&local_58,local_60,(int)&local_50 + iVar7,10 - iVar7);
    if ((char)local_58 != '\x04') {
LAB_0111cda4:
      iVar7 = FUN_0157c4a0(local_58,local_54);
      if (iVar7 != 0) goto LAB_0111cd1c;
    }
  }
  uVar11 = param_2[10];
  (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_004144ea,1);
  if ((char)local_50 != '\x04') goto LAB_0111cd30;
  FUN_0111f934(&local_50,local_60,*(undefined4 *)(local_5c + 0x1c),"method",6);
  if ((char)local_50 != '\x04') goto LAB_0111cd30;
  (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_00418eb8,1);
  if ((char)local_50 != '\x04') goto LAB_0111cd30;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)uVar11) {
  case '\0':
    uVar10 = *(undefined4 *)(local_5c + 0x1c);
    uVar6 = 0x10;
    pcVar4 = &DAT_00563d80;
    break;
  case '\x01':
    uVar10 = *(undefined4 *)(local_5c + 0x1c);
    uVar6 = 0x1b;
    pcVar4 = "mining.extranonce.subscribe";
    break;
  case '\x02':
    uVar10 = *(undefined4 *)(local_5c + 0x1c);
    uVar6 = 0x10;
    pcVar4 = &DAT_00564b10;
    break;
  case '\x03':
    uVar10 = *(undefined4 *)(local_5c + 0x1c);
    uVar6 = 0x15;
    pcVar4 = "mining.set_difficulty";
    break;
  case '\x04':
    uVar10 = *(undefined4 *)(local_5c + 0x1c);
    uVar6 = 0x15;
    pcVar4 = "mining.set_extranonce";
    break;
  case '\x05':
    uVar10 = *(undefined4 *)(local_5c + 0x1c);
    uVar6 = 0x10;
    pcVar4 = &DAT_00564990;
    break;
  case '\x06':
    uVar10 = *(undefined4 *)(local_5c + 0x1c);
    uVar6 = 0xd;
    pcVar4 = "mining.submit";
    break;
  case '\a':
    uVar10 = *(undefined4 *)(local_5c + 0x1c);
    uVar6 = 0xd;
    pcVar4 = "mining.notify";
    break;
  case '\b':
    uVar10 = *(undefined4 *)(local_5c + 0x1c);
    uVar6 = 0x17;
    pcVar4 = "mining.set_version_mask";
    break;
  case '\t':
    uVar10 = *(undefined4 *)(local_5c + 0x1c);
    uVar6 = 0x10;
    pcVar4 = &DAT_005656d0;
    break;
  case '\n':
    uVar10 = *(undefined4 *)(local_5c + 0x1c);
    uVar6 = 0xb;
    pcVar4 = "mining.ping";
    break;
  case '\v':
    uVar6 = 0x34;
    pcVar4 = "the enum variant Method::Result cannot be serialized";
    goto LAB_0111cd5c;
  case '\f':
    uVar6 = 0x33;
    pcVar4 = "the enum variant Method::Error cannot be serialized";
LAB_0111cd5c:
    iVar7 = FUN_01125bd0(pcVar4,uVar6);
    goto LAB_0111cd1c;
  }
  FUN_0111f934(&local_50,local_60,uVar10,pcVar4,uVar6);
  if (((char)local_50 == '\x04') || (iVar7 = FUN_0157c4a0(local_50,local_4c), iVar7 == 0)) {
    (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_004144ea,1);
    if ((char)local_50 == '\x04') {
      FUN_0111f934(&local_50,local_60,*(undefined4 *)(local_5c + 0x1c),
                   "paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended"
                   ,6);
      if ((char)local_50 == '\x04') {
        (**(code **)(local_5c + 0x1c))(&local_50,local_60,&DAT_00418eb8,1);
        if ((char)local_50 == '\x04') {
          iVar7 = FUN_0111f590(param_2 + 4,&local_60);
LAB_0111ccdc:
          if (iVar7 == 0) {
            (**(code **)(local_5c + 0x1c))(&local_50,local_60,"}",1);
            if (((char)local_50 == '\x04') || (iVar7 = FUN_0157c4a0(local_50,local_4c), iVar7 == 0))
            {
              *param_1 = &DAT_8000000c;
              return;
            }
          }
          goto LAB_0111cd1c;
        }
      }
    }
LAB_0111cd30:
    iVar7 = FUN_0157c4a0(local_50,local_4c);
  }
LAB_0111cd1c:
  param_1[1] = iVar7;
  *param_1 = 0x80000003;
  return;
}

