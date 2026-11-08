// FUN_00036380 @ 00036380  size=668  callers=10
// program: bmminer


void FUN_00036380(uint param_1,char *param_2)

{
  char *pcVar1;
  char local_818 [2048];
  
  DAT_0048d374 = param_1;
  if (param_2 == (char *)0x0) {
    if (3 < DAT_00087bbc) {
      if (param_1 < 0x13) {
        pcVar1 = (&PTR_s_STATUS_INIT_0006eac0)[param_1];
      }
      else {
        pcVar1 = (char *)0x0;
      }
      snprintf(local_818,0x800,"%s\n",pcVar1);
      FUN_00032218(3,local_818,0);
      goto LAB_000363f8;
    }
LAB_0003645c:
    if (param_1 == 3) {
      return;
    }
  }
  else {
    if (DAT_00087bbc < 4) goto LAB_0003645c;
    if (param_1 < 0x13) {
      pcVar1 = (&PTR_s_STATUS_INIT_0006eac0)[param_1];
    }
    else {
      pcVar1 = (char *)0x0;
    }
    snprintf(local_818,0x800,"%s: %s\n",pcVar1,param_2);
    FUN_00032218(3,local_818,0);
LAB_000363f8:
    if (param_1 == 3) goto LAB_00036408;
  }
  DAT_0048d378 = param_1;
LAB_00036408:
  switch(DAT_0048d374) {
  case 4:
  case 8:
  case 9:
  case 0xe:
  case 0x10:
  case 0x11:
    if (1 < DAT_00087bbc) {
      snprintf(local_818,0x800,"%s: %s\n","stop_mining_waiting",param_2);
      FUN_00032218(1,local_818,0);
    }
    FUN_00015fd4(&DAT_0048d38c);
    DAT_00b2d220 = &DAT_0048d38c;
    FUN_00017010();
    FUN_00035f08();
    FUN_000362d4();
    FUN_00047fd8();
    FUN_00048034();
    FUN_00022a74(1);
    do {
      sleep(1);
    } while( true );
  case 5:
  case 7:
  case 10:
  case 0xc:
  case 0xf:
  case 0x12:
    if (1 < DAT_00087bbc) {
      snprintf(local_818,0x800,"%s: %s\n","stop_mining",param_2);
      FUN_00032218(1,local_818,0);
    }
    break;
  case 6:
  case 0xb:
  case 0xd:
    if (1 < DAT_00087bbc) {
      snprintf(local_818,0x800,"%s: %s\n","stop_mining_and_restart",param_2);
      FUN_00032218(1,local_818,0);
    }
    FUN_00015fd4(&DAT_0048d37c);
    DAT_00b2d220 = &DAT_0048d37c;
    FUN_00017010();
    FUN_00035f08();
    FUN_000362d4();
    FUN_00047fd8();
    FUN_00048034();
    builtin_strncpy(local_818,"restart\n",9);
    FUN_00032218(0,local_818);
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","driver-btm-api.c",0xd0,"stop_mining_and_restart");
  default:
    return;
  }
  FUN_00015fd4(&DAT_0048d384);
  DAT_00b2d220 = &DAT_0048d384;
  FUN_00017010();
  FUN_00035f08();
  FUN_000362d4();
  FUN_00047fd8();
  FUN_00048034();
  FUN_00022a74(1);
  return;
}

