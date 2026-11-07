// FUN_0003777c @ 0003777c  size=1300  callers=1
// program: bmminer


undefined4 FUN_0003777c(byte *param_1)

{
  byte bVar1;
  void *__dest;
  int iVar2;
  uint uVar3;
  size_t __nmemb;
  int local_878;
  int local_874;
  byte *local_870;
  uint local_86c;
  byte *local_868;
  uint local_864;
  undefined4 local_860;
  undefined4 local_85c;
  undefined4 local_858;
  undefined4 local_854;
  uint local_850;
  int local_84c;
  undefined4 local_848;
  uint local_844;
  uint local_840;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 local_830;
  uint local_82c;
  char local_828 [2052];
  
  if (*param_1 != 0x52) {
    if ((DAT_0048d36e == '\0') ||
       (((DAT_0071e84c == '\0' && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 7)))) {
      return 0xffffffff;
    }
    snprintf(local_828,0x800,"%s: SEND_JOB_TYPE is wrong : 0x%x\n","dhash_chip_send_job",
             (uint)*param_1);
    FUN_00032218(7,local_828,0);
    return 0xffffffff;
  }
  uVar3 = *(uint *)(param_1 + 4);
  if ((DAT_0048d36e != '\0') &&
     (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
    snprintf(local_828,0x800,"%s: len = 0x%x\n","dhash_chip_send_job",uVar3);
    FUN_00032218(7,local_828,0);
  }
  __nmemb = uVar3 + 8;
  __dest = calloc(__nmemb,1);
  if (__dest == (void *)0x0) {
    if ((DAT_0048d36e == '\0') ||
       (((DAT_0071e84c == '\0' && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 7)))) {
      return 0xfffffffe;
    }
    snprintf(local_828,0x800,"%s: malloc buffer failed.\n","dhash_chip_send_job");
    FUN_00032218(7,local_828,0);
    return 0xfffffffe;
  }
  memcpy(__dest,param_1,__nmemb);
  if (DAT_0048d3b0 == '\0') {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_828,"only support asic boost",0x18);
      FUN_00032218(3,local_828,0);
    }
    goto LAB_00037b90;
  }
  if (*(char *)((int)__dest + 0x50) == '\0') {
    DAT_00087b68 = 1;
    DAT_0008a82c = 0;
    if (DAT_00087dfc == 1) goto LAB_00037b90;
LAB_00037920:
    if (3 < DAT_00087bbc) {
      snprintf(local_828,0x800,"Version num %d\n",DAT_00087b68);
      FUN_00032218(3,local_828,0);
    }
    DAT_00087dfc = DAT_00087b68;
  }
  else {
    DAT_00087b68 = *(int *)((int)__dest + 0x54);
    DAT_0008a82c = *(uint *)((int)__dest + 0x58);
    if (DAT_00087b68 != DAT_00087dfc) goto LAB_00037920;
  }
  if ((DAT_00087dfc - 4U & 0xfffffffb) == 0) {
    if (DAT_00087e00 != DAT_0008a82c) {
      iVar2 = DAT_00087dfc;
      if (3 < DAT_00087bbc) {
        snprintf(local_828,0x800,"Mask num 0x%x\n",DAT_0008a82c);
        FUN_00032218(3,local_828,0);
        iVar2 = DAT_00087b68;
      }
      DAT_00087e00 = DAT_0008a82c;
      FUN_000368b4(DAT_0048d398,iVar2,0x5a);
    }
    bVar1 = *(byte *)((int)__dest + 9);
    if ((bVar1 & 2) != 0) {
      FUN_0004a784(*(undefined1 *)((int)__dest + 10));
      bVar1 = *(byte *)((int)__dest + 9);
    }
    local_86c = (uint)*(ushort *)((int)__dest + 0x3c);
    local_82c = bVar1 & 1;
    local_868 = param_1 + local_86c + 0x60;
    local_830 = DAT_00b2d228;
    local_870 = param_1 + 0x60;
    local_858 = *(undefined4 *)((int)__dest + 0xc);
    local_864 = (uint)*(ushort *)((int)__dest + 0x42);
    local_85c = *(undefined4 *)((int)__dest + 0x38);
    local_840 = (uint)*(ushort *)((int)__dest + 0x40);
    local_844 = (uint)*(ushort *)((int)__dest + 0x3e);
    local_84c = (int)__dest + 0x14;
    local_850 = DAT_0008a82c;
    local_854 = *(undefined4 *)((int)__dest + 0x10);
    local_838 = *(undefined4 *)((int)__dest + 0x48);
    uStack_834 = *(undefined4 *)((int)__dest + 0x4c);
    local_860 = *(undefined4 *)((int)__dest + 0x34);
    local_874 = DAT_00087b68;
    local_848 = 0x20;
    local_878 = 0;
    if (DAT_0048d3b1 == '\0') {
      uVar3 = FUN_0004ac18();
      FUN_0004ac38(uVar3 | 0x10000);
      uVar3 = FUN_0004a0bc();
      FUN_0004a0e4(uVar3 | 0x80);
      DAT_0048d3b1 = '\x01';
    }
    if (4 < DAT_00087bbc) {
      snprintf(local_828,0x800,"start to send job, mid_auto_gen = %d",local_878);
      FUN_00032218(4,local_828,0);
    }
    FUN_0004ac9c(&local_878);
    free(__dest);
    if ((DAT_0048d36e != '\0') &&
       (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
      snprintf(local_828,0x800,"--- %s end\n","dhash_chip_send_job");
      FUN_00032218(7,local_828,0);
    }
    FUN_00034828(&DAT_0048d3a0);
    FUN_00034a5c(1);
    return 0;
  }
LAB_00037b90:
  free(__dest);
  return 0;
}

