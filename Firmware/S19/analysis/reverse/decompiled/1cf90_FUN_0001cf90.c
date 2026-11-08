// FUN_0001cf90 @ 0001cf90  size=588
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001cf90(char *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  void *__ptr;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char acStack_9b4 [32];
  char acStack_994 [128];
  int local_914 [23];
  char acStack_8b8 [160];
  char local_818 [4];
  char acStack_814 [4];
  char acStack_810 [4];
  char acStack_80c [4];
  char local_808 [4];
  char local_804 [4];
  char acStack_800 [4];
  undefined1 local_7fc;
  
  memset(acStack_994,0,0x80);
  memset(acStack_9b4,0,0x20);
  iVar2 = FUN_00027eb4(acStack_9b4);
  if (iVar2 == 0) {
    sprintf(acStack_994,"http://%s:%d/power/%s",param_1,param_2,acStack_9b4);
    __ptr = (void *)FUN_00027970(acStack_994);
    if (__ptr != (void *)0x0) {
      iVar2 = FUN_00054b30(__ptr,0,local_914);
      if (iVar2 == 0) {
        if (DAT_00087bbc < 4) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = 0xffffffff;
          snprintf(local_818,0x800,"JSON decode failed(%d): %s",local_914[0],acStack_8b8);
          FUN_00032218(3,local_818,0);
        }
      }
      else {
        iVar3 = FUN_000559d4(iVar2,"power");
        if (iVar3 == 0) {
          if (DAT_00087bbc < 4) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = 0xffffffff;
            local_818[0] = s_no_json_object_power__found_0006917c[0];
            local_818[1] = s_no_json_object_power__found_0006917c[1];
            local_818[2] = s_no_json_object_power__found_0006917c[2];
            local_818[3] = s_no_json_object_power__found_0006917c[3];
            acStack_814[0] = s_no_json_object_power__found_0006917c[4];
            acStack_814[1] = s_no_json_object_power__found_0006917c[5];
            acStack_814[2] = s_no_json_object_power__found_0006917c[6];
            acStack_814[3] = s_no_json_object_power__found_0006917c[7];
            acStack_810[0] = s_no_json_object_power__found_0006917c[8];
            acStack_810[1] = s_no_json_object_power__found_0006917c[9];
            acStack_810[2] = s_no_json_object_power__found_0006917c[10];
            acStack_810[3] = s_no_json_object_power__found_0006917c[0xb];
            acStack_80c[0] = s_no_json_object_power__found_0006917c[0xc];
            acStack_80c[1] = s_no_json_object_power__found_0006917c[0xd];
            acStack_80c[2] = s_no_json_object_power__found_0006917c[0xe];
            acStack_80c[3] = s_no_json_object_power__found_0006917c[0xf];
            local_808[0] = s_no_json_object_power__found_0006917c[0x10];
            local_808[1] = s_no_json_object_power__found_0006917c[0x11];
            local_808[2] = s_no_json_object_power__found_0006917c[0x12];
            local_808[3] = s_no_json_object_power__found_0006917c[0x13];
            local_804[0] = s_no_json_object_power__found_0006917c[0x14];
            local_804[1] = s_no_json_object_power__found_0006917c[0x15];
            local_804[2] = s_no_json_object_power__found_0006917c[0x16];
            local_804[3] = s_no_json_object_power__found_0006917c[0x17];
            acStack_800[0] = s_no_json_object_power__found_0006917c[0x18];
            acStack_800[1] = s_no_json_object_power__found_0006917c[0x19];
            acStack_800[2] = s_no_json_object_power__found_0006917c[0x1a];
            acStack_800[3] = s_no_json_object_power__found_0006917c[0x1b];
            local_7fc = (undefined1)ram0x00069198;
            FUN_00032218(3,local_818,0);
          }
        }
        else {
          uVar4 = FUN_00056164();
        }
        if (*(int *)(iVar2 + 4) != -1) {
          piVar5 = (int *)(iVar2 + 4);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar3 + -1;
          if (iVar3 + -1 == 0) {
            FUN_0005630c(iVar2);
          }
        }
      }
      free(__ptr);
      return uVar4;
    }
    if (3 < DAT_00087bbc) {
      local_818[0] = s_http_get_failed_0006914c[0];
      local_818[1] = s_http_get_failed_0006914c[1];
      local_818[2] = s_http_get_failed_0006914c[2];
      local_818[3] = s_http_get_failed_0006914c[3];
      acStack_814[0] = s_http_get_failed_0006914c[4];
      acStack_814[1] = s_http_get_failed_0006914c[5];
      acStack_814[2] = s_http_get_failed_0006914c[6];
      acStack_814[3] = s_http_get_failed_0006914c[7];
      acStack_810[0] = s_http_get_failed_0006914c[8];
      acStack_810[1] = s_http_get_failed_0006914c[9];
      acStack_810[2] = s_http_get_failed_0006914c[10];
      acStack_810[3] = s_http_get_failed_0006914c[0xb];
      acStack_80c[0] = s_http_get_failed_0006914c[0xc];
      acStack_80c[1] = s_http_get_failed_0006914c[0xd];
      acStack_80c[2] = s_http_get_failed_0006914c[0xe];
      acStack_80c[3] = s_http_get_failed_0006914c[0xf];
      local_808[0] = (char)ram0x0006915c;
      FUN_00032218(3,local_818,0);
    }
  }
  else if (3 < DAT_00087bbc) {
    local_818[0] = s_get_local_ip_failed_0006911c[0];
    local_818[1] = s_get_local_ip_failed_0006911c[1];
    local_818[2] = s_get_local_ip_failed_0006911c[2];
    local_818[3] = s_get_local_ip_failed_0006911c[3];
    acStack_814[0] = s_get_local_ip_failed_0006911c[4];
    acStack_814[1] = s_get_local_ip_failed_0006911c[5];
    acStack_814[2] = s_get_local_ip_failed_0006911c[6];
    acStack_814[3] = s_get_local_ip_failed_0006911c[7];
    acStack_810[0] = s_get_local_ip_failed_0006911c[8];
    acStack_810[1] = s_get_local_ip_failed_0006911c[9];
    acStack_810[2] = s_get_local_ip_failed_0006911c[10];
    acStack_810[3] = s_get_local_ip_failed_0006911c[0xb];
    acStack_80c[0] = s_get_local_ip_failed_0006911c[0xc];
    acStack_80c[1] = s_get_local_ip_failed_0006911c[0xd];
    acStack_80c[2] = s_get_local_ip_failed_0006911c[0xe];
    acStack_80c[3] = s_get_local_ip_failed_0006911c[0xf];
    local_808[0] = s_get_local_ip_failed_0006911c[0x10];
    local_808[1] = s_get_local_ip_failed_0006911c[0x11];
    local_808[2] = s_get_local_ip_failed_0006911c[0x12];
    local_808[3] = s_get_local_ip_failed_0006911c[0x13];
    local_804[0] = (char)ram0x00069130;
    FUN_00032218(3,local_818,0);
    return 0xffffffff;
  }
  return 0xffffffff;
}


