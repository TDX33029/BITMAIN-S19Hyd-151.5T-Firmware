// FUN_0001d1dc @ 0001d1dc  size=712
// callers: [FUN_00029bb8]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001d1dc(void)

{
  bool bVar1;
  void *__ptr;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char acStack_9a4 [128];
  int local_924 [23];
  char acStack_8c8 [160];
  char local_828 [4];
  char acStack_824 [4];
  char acStack_820 [4];
  undefined3 uStack_81c;
  char cStack_819;
  char local_818 [4];
  char acStack_814 [4];
  char acStack_810 [4];
  undefined2 local_80c;
  
  iVar5 = 1;
  do {
    memset(acStack_9a4,0,0x80);
    sprintf(acStack_9a4,"http://%s:%d/api/v1/power","10.76.16.198",0x17c0);
    __ptr = (void *)FUN_00027970(acStack_9a4);
    if (__ptr == (void *)0x0) {
      if (3 < DAT_00087bbc) {
        local_828[0] = s_http_get_failed_0006914c[0];
        local_828[1] = s_http_get_failed_0006914c[1];
        local_828[2] = s_http_get_failed_0006914c[2];
        local_828[3] = s_http_get_failed_0006914c[3];
        acStack_824[0] = s_http_get_failed_0006914c[4];
        acStack_824[1] = s_http_get_failed_0006914c[5];
        acStack_824[2] = s_http_get_failed_0006914c[6];
        acStack_824[3] = s_http_get_failed_0006914c[7];
        acStack_820[0] = s_http_get_failed_0006914c[8];
        acStack_820[1] = s_http_get_failed_0006914c[9];
        acStack_820[2] = s_http_get_failed_0006914c[10];
        acStack_820[3] = s_http_get_failed_0006914c[0xb];
        uStack_81c._0_1_ = s_http_get_failed_0006914c[0xc];
        uStack_81c._1_1_ = s_http_get_failed_0006914c[0xd];
        uStack_81c._2_1_ = s_http_get_failed_0006914c[0xe];
        cStack_819 = s_http_get_failed_0006914c[0xf];
        local_818[0] = (char)ram0x0006915c;
        FUN_00032218(3,local_828,0);
        goto LAB_0001d2e8;
      }
    }
    else {
      iVar2 = FUN_00054b30(__ptr,0,local_924);
      if (iVar2 == 0) {
        if (3 < DAT_00087bbc) {
          snprintf(local_828,0x800,"JSON decode failed(%d): %s",local_924[0],acStack_8c8);
          FUN_00032218(3,local_828,0);
          free(__ptr);
          goto LAB_0001d2e8;
        }
      }
      else {
        iVar3 = FUN_000559d4(iVar2,"power");
        if (iVar3 == 0) {
          if (DAT_00087bbc < 4) {
LAB_0001d360:
            iVar3 = *(int *)(iVar2 + 4);
          }
          else {
            local_828[0] = s_no_json_object__power__found_000691c8[0];
            local_828[1] = s_no_json_object__power__found_000691c8[1];
            local_828[2] = s_no_json_object__power__found_000691c8[2];
            local_828[3] = s_no_json_object__power__found_000691c8[3];
            acStack_824[0] = s_no_json_object__power__found_000691c8[4];
            acStack_824[1] = s_no_json_object__power__found_000691c8[5];
            acStack_824[2] = s_no_json_object__power__found_000691c8[6];
            acStack_824[3] = s_no_json_object__power__found_000691c8[7];
            acStack_820[0] = s_no_json_object__power__found_000691c8[8];
            acStack_820[1] = s_no_json_object__power__found_000691c8[9];
            acStack_820[2] = s_no_json_object__power__found_000691c8[10];
            acStack_820[3] = s_no_json_object__power__found_000691c8[0xb];
            uStack_81c._0_1_ = s_no_json_object__power__found_000691c8[0xc];
            uStack_81c._1_1_ = s_no_json_object__power__found_000691c8[0xd];
            uStack_81c._2_1_ = s_no_json_object__power__found_000691c8[0xe];
            cStack_819 = s_no_json_object__power__found_000691c8[0xf];
            local_818[0] = s_no_json_object__power__found_000691c8[0x10];
            local_818[1] = s_no_json_object__power__found_000691c8[0x11];
            local_818[2] = s_no_json_object__power__found_000691c8[0x12];
            local_818[3] = s_no_json_object__power__found_000691c8[0x13];
            acStack_814[0] = s_no_json_object__power__found_000691c8[0x14];
            acStack_814[1] = s_no_json_object__power__found_000691c8[0x15];
            acStack_814[2] = s_no_json_object__power__found_000691c8[0x16];
            acStack_814[3] = s_no_json_object__power__found_000691c8[0x17];
            acStack_810[0] = s_no_json_object__power__found_000691c8[0x18];
            acStack_810[1] = s_no_json_object__power__found_000691c8[0x19];
            acStack_810[2] = s_no_json_object__power__found_000691c8[0x1a];
            acStack_810[3] = s_no_json_object__power__found_000691c8[0x1b];
            local_80c = (undefined2)ram0x000691e4;
            FUN_00032218(3,local_828,0);
            iVar3 = *(int *)(iVar2 + 4);
          }
        }
        else {
          iVar3 = FUN_00056164();
          if (-1 < iVar3) {
            if (*(int *)(iVar2 + 4) == -1) goto LAB_0001d278;
            piVar4 = (int *)(iVar2 + 4);
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar4;
              bVar1 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar1);
            *piVar4 = iVar5 + -1;
            if (iVar5 + -1 == 0) {
              FUN_0005630c(iVar2);
              free(__ptr);
            }
            else {
LAB_0001d278:
              free(__ptr);
            }
            return iVar3;
          }
          if (DAT_00087bbc < 4) goto LAB_0001d360;
          local_828[0] = s_IP_not_found__000691e8[0];
          local_828[1] = s_IP_not_found__000691e8[1];
          local_828[2] = s_IP_not_found__000691e8[2];
          local_828[3] = s_IP_not_found__000691e8[3];
          acStack_824[0] = s_IP_not_found__000691e8[4];
          acStack_824[1] = s_IP_not_found__000691e8[5];
          acStack_824[2] = s_IP_not_found__000691e8[6];
          acStack_824[3] = s_IP_not_found__000691e8[7];
          acStack_820[0] = s_IP_not_found__000691e8[8];
          acStack_820[1] = s_IP_not_found__000691e8[9];
          acStack_820[2] = s_IP_not_found__000691e8[10];
          acStack_820[3] = s_IP_not_found__000691e8[0xb];
          uStack_81c = (undefined3)ram0x000691f4;
          FUN_00032218(3,local_828,0);
          iVar3 = *(int *)(iVar2 + 4);
        }
        if (iVar3 != -1) {
          piVar4 = (int *)(iVar2 + 4);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar3 + -1;
          if (iVar3 + -1 == 0) {
            FUN_0005630c(iVar2);
          }
        }
      }
      free(__ptr);
LAB_0001d2e8:
      if (3 < DAT_00087bbc) {
        snprintf(local_828,0x800,"Error get power error, NO.%d time.\n",iVar5);
        FUN_00032218(3,local_828,0);
      }
    }
    iVar5 = iVar5 + 1;
    sleep(5);
    if (iVar5 == 0xb) {
      return 0;
    }
  } while( true );
}


