// FUN_0004ac9c @ 0004ac9c  size=948  callers=1
// program: bmminer


undefined4 FUN_0004ac9c(int *param_1)

{
  void *__dest;
  undefined4 uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  size_t __nmemb;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 uVar14;
  int local_5c;
  uint local_4c;
  uint local_48 [9];
  
  memset(local_48,0,0x20);
  uVar7 = param_1[3];
  local_5c = DAT_0050fa5c;
  if (DAT_0050fa5c == DAT_0050fa60) {
    local_5c = DAT_0050fa64;
  }
  if ((uVar7 & 0x3f) < 0x38) {
    __nmemb = (uVar7 & 0xffffffc0) + 0x40;
  }
  else {
    __nmemb = (uVar7 & 0xffffffc0) + 0x80;
  }
  __dest = calloc(__nmemb,1);
  if (__dest == (void *)0x0) {
    uVar1 = 0xfffffffc;
  }
  else {
    memcpy(__dest,(void *)param_1[2],uVar7);
    *(undefined1 *)((int)__dest + uVar7) = 0x80;
    *(uint *)((int)__dest + (__nmemb - 4)) =
         uVar7 << 0x1b | ((uVar7 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
         ((uVar7 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar7 & 0x1fffffff) >> 0x15;
    *(undefined4 *)((int)__dest + (__nmemb - 8)) = 0;
    if (__nmemb != 0) {
      pbVar10 = (byte *)((int)__dest + -1);
      pbVar11 = (byte *)(local_5c + -1);
      pbVar2 = pbVar11;
      pbVar4 = pbVar10;
      do {
        pbVar4 = pbVar4 + 1;
        pbVar2 = pbVar2 + 1;
        *pbVar2 = *pbVar4;
      } while ((byte *)((int)__dest + (__nmemb - 1)) != pbVar4);
      pbVar2 = pbVar11 + __nmemb;
      iVar8 = 0;
      do {
        pbVar11 = pbVar11 + 1;
        pbVar10 = pbVar10 + 1;
        if ((uint)*pbVar11 != (uint)*pbVar10) {
          printf("%s: coinbase_padding_in_ddr[%d] = 0x%x, but *(coinbase_padding + %d) = 0x%x",
                 "dhash_send_job",iVar8,(uint)*pbVar11,iVar8,(uint)*pbVar10);
        }
        iVar8 = iVar8 + 1;
      } while (pbVar2 != pbVar11);
    }
    if (param_1[5] != 0) {
      uVar7 = 0;
      puVar3 = (undefined4 *)(local_5c + __nmemb);
      do {
        puVar5 = (undefined4 *)(param_1[4] + uVar7 * 0x20);
        uVar7 = uVar7 + 1;
        uVar14 = puVar5[1];
        uVar12 = puVar5[2];
        uVar1 = puVar5[3];
        *puVar3 = *puVar5;
        puVar3[1] = uVar14;
        puVar3[2] = uVar12;
        puVar3[3] = uVar1;
        uVar14 = puVar5[5];
        uVar12 = puVar5[6];
        uVar1 = puVar5[7];
        puVar3[4] = puVar5[4];
        puVar3[5] = uVar14;
        puVar3[6] = uVar12;
        puVar3[7] = uVar1;
        puVar3 = puVar3 + 8;
      } while (uVar7 < (uint)param_1[5]);
    }
    FUN_00049d70();
    if (local_5c == DAT_0050fa5c) {
      iVar8 = DAT_0050fa68 + 0x200000;
    }
    else {
      iVar8 = DAT_0050fa68 + 0x210000;
    }
    FUN_00045c40(0x29,iVar8);
    FUN_00045bc4(0x29,&local_4c);
    FUN_00045c40(0x2c,param_1[8]);
    FUN_00045bc4(0x2c,&local_4c);
    if (*param_1 == 0) {
      iVar8 = param_1[1];
    }
    else {
      iVar8 = 1;
    }
    FUN_0004a8b0(param_1[9],iVar8,param_1[10]);
    memset(local_48,0,0x20);
    pbVar4 = (byte *)param_1[0xb];
    puVar13 = &local_4c;
    pbVar2 = pbVar4;
    do {
      pbVar11 = pbVar2 + 4;
      puVar13 = puVar13 + 1;
      *puVar13 = (uint)pbVar2[2] << 0x10 | (uint)pbVar2[3] << 0x18 | (uint)*pbVar2 |
                 (uint)pbVar2[1] << 8;
      pbVar2 = pbVar11;
    } while (pbVar11 != pbVar4 + 0x20);
    FUN_0004aa94(local_48);
    FUN_00045c40(0x2f,param_1[6]);
    FUN_00045bc4(0x2f,&local_4c);
    FUN_00045c40(0x30,param_1[7]);
    FUN_00045bc4(0x30,&local_4c);
    FUN_00045c40(0x24,(param_1[0xe] & 0xffU) << 8 | param_1[0xd] << 0x10 | (__nmemb & 0x3fff) >> 6);
    FUN_00045bc4(0x24,&local_4c);
    local_48[1] = param_1[0x11];
    local_48[0] = param_1[0x10];
    FUN_0004abac(local_48);
    FUN_0004abf0(param_1[5]);
    FUN_00045c40(0x2a,__nmemb + param_1[5] * 0x20 & 0xffff);
    FUN_00045bc4(0x2a,&local_4c);
    usleep(1000);
    FUN_0004a5d4(param_1[0x12]);
    if (*param_1 == 0 && 1 < (uint)param_1[1]) {
      uVar7 = 0;
      uVar6 = (param_1[1] & 0xfU) << 8;
    }
    else {
      uVar6 = 0x100;
      uVar7 = 0;
      if (*param_1 != 0) {
        uVar7 = 0x4000;
      }
    }
    uVar9 = 0;
    if (param_1[0x13] != 0) {
      uVar9 = 0x80;
      FUN_0004ac60();
    }
    local_4c = 0;
    FUN_00045bc4(0x23,&local_4c);
    FUN_00045c40(0x23,local_4c & 0xfffff0bf | 0x8060 | uVar7 | uVar6 | uVar9);
    free(__dest);
    uVar1 = 0;
    DAT_0050fa60 = local_5c;
  }
  return uVar1;
}

