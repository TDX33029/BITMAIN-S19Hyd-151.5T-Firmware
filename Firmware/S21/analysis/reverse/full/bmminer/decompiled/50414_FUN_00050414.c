// FUN_00050414 @ 00050414  size=1316  callers=1
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00050414(byte *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  void *__dest;
  size_t __nmemb;
  uint uVar3;
  int local_2078;
  int local_2074;
  byte *local_2070;
  uint local_206c;
  byte *local_2068;
  uint local_2064;
  undefined4 local_2060;
  undefined4 local_205c;
  undefined4 local_2058;
  undefined4 local_2054;
  uint local_2050;
  int local_204c;
  undefined4 local_2048;
  uint local_2044;
  uint local_2040;
  undefined4 local_2038;
  undefined4 uStack_2034;
  undefined4 local_2030;
  uint local_202c;
  char local_2028 [8196];
  
  if (*param_1 == 0x52) {
    uVar3 = *(uint *)(param_1 + 4);
    if ((DAT_008c702e != '\0') &&
       (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
      snprintf(local_2028,0x2000,"%s: len = 0x%x\n","dhash_chip_send_job",uVar3);
      FUN_0004948c(7,local_2028,0);
    }
    __nmemb = uVar3 + 8;
    __dest = calloc(__nmemb,1);
    if (__dest == (void *)0x0) {
      if ((DAT_008c702e == '\0') ||
         (((DAT_00a5d20d == '\0' && (DAT_008c702d == '\0')) && (DAT_000be644 < 7)))) {
        uVar2 = 0xfffffffe;
      }
      else {
        snprintf(local_2028,0x2000,"%s: malloc buffer failed.\n","dhash_chip_send_job");
        FUN_0004948c(7,local_2028,0);
        uVar2 = 0xfffffffe;
      }
    }
    else {
      memcpy(__dest,param_1,__nmemb);
      if (DAT_008c70b0 == '\0') {
        if (3 < DAT_000be63c) {
          builtin_strncpy(local_2028,"only support asic boost",0x18);
          FUN_0004948c(3,local_2028,0);
        }
        free(__dest);
        uVar2 = 0;
      }
      else {
        if (*(char *)((int)__dest + 0x50) == '\0') {
          DAT_000be5ec = 1;
          DAT_000c94cc = 0;
        }
        else {
          DAT_000be5ec = *(int *)((int)__dest + 0x54);
          DAT_000c94cc = *(uint *)((int)__dest + 0x58);
        }
        if (DAT_000be8fc != DAT_000be5ec) {
          if (3 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"Version num %d\n",DAT_000be5ec);
            FUN_0004948c(3,local_2028,0);
          }
          DAT_000be8fc = DAT_000be5ec;
        }
        if (DAT_000be900 != DAT_000c94cc) {
          if (3 < DAT_000be63c) {
            snprintf(local_2028,0x2000,"Mask num 0x%x\n",DAT_000c94cc);
            FUN_0004948c(3,local_2028,0);
          }
          DAT_000be900 = DAT_000c94cc;
          FUN_0004ef68(DAT_008c7040,DAT_000be5ec,0x5a);
          FUN_0006b53c();
          FUN_0002c830((DAT_000c94cc & 0x1fffffff) >> 0xd);
        }
        bVar1 = *(byte *)((int)__dest + 9);
        if ((bVar1 & 2) != 0) {
          FUN_0006bb30(*(undefined1 *)((int)__dest + 10));
          bVar1 = *(byte *)((int)__dest + 9);
        }
        local_206c = (uint)*(ushort *)((int)__dest + 0x3c);
        local_202c = bVar1 & 1;
        local_2068 = param_1 + local_206c + 0x60;
        local_2058 = *(undefined4 *)((int)__dest + 0xc);
        local_2070 = param_1 + 0x60;
        local_2064 = (uint)*(ushort *)((int)__dest + 0x42);
        local_2030 = DAT_00aaa910;
        local_205c = *(undefined4 *)((int)__dest + 0x38);
        local_2040 = (uint)*(ushort *)((int)__dest + 0x40);
        local_2044 = (uint)*(ushort *)((int)__dest + 0x3e);
        local_2050 = DAT_000c94cc;
        local_2054 = *(undefined4 *)((int)__dest + 0x10);
        local_2060 = *(undefined4 *)((int)__dest + 0x34);
        local_2038 = *(undefined4 *)((int)__dest + 0x48);
        uStack_2034 = *(undefined4 *)((int)__dest + 0x4c);
        local_2074 = DAT_000be5ec;
        local_204c = (int)__dest + 0x14;
        local_2048 = 0x20;
        local_2078 = 1;
        if (DAT_008c70b1 == '\0') {
          uVar3 = FUN_0006c30c();
          FUN_0006c338(uVar3 | 0x10000);
          uVar3 = FUN_0006b35c();
          FUN_0006b390(uVar3 | 0x80);
          DAT_008c70b1 = '\x01';
        }
        if (4 < DAT_000be63c) {
          snprintf(local_2028,0x2000,"start to send job, mid_auto_gen = %d",local_2078);
          FUN_0004948c(4,local_2028,0);
        }
        FUN_0006aa70(&local_2078);
        free(__dest);
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          snprintf(local_2028,0x2000,"--- %s end\n","dhash_chip_send_job");
          FUN_0004948c(7,local_2028,0);
        }
        FUN_0004bd34(&DAT_008c7098);
        FUN_0004bf68(1);
        uVar2 = 0;
      }
    }
  }
  else {
    if ((DAT_008c702e == '\0') ||
       (((DAT_00a5d20d == '\0' && (DAT_008c702d == '\0')) && (DAT_000be644 < 7)))) {
      return 0xffffffff;
    }
    snprintf(local_2028,0x2000,"%s: SEND_JOB_TYPE is wrong : 0x%x\n","dhash_chip_send_job",
             (uint)*param_1);
    FUN_0004948c(7,local_2028,0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

