// FUN_0002ffb0 @ 0002ffb0  size=1008  callers=1
// program: bmminer


void FUN_0002ffb0(byte *param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  char local_828 [20];
  uint local_814;
  char acStack_810 [2028];
  
  if (DAT_0048d3b1 == '\0') {
    return;
  }
  bVar2 = *param_1;
  if ((bVar2 & 0x80) == 0) {
    uVar11 = *(undefined4 *)(param_1 + 4);
    uVar4 = bVar2 & 3;
    uVar3 = FUN_0002009c();
    iVar7 = FUN_00059238(uVar11,uVar3);
    if ((DAT_00087ba8 != uVar4) || (DAT_00087bac != iVar7)) {
      uVar5 = DAT_0008a9a8 + 1;
      bVar1 = DAT_0008a9a8 < 0x15;
      DAT_0008a9a8 = uVar5;
      if ((bVar1) && (3 < DAT_00087bbc)) {
        snprintf(local_828,0x800,"!!! nonce invalid from chain:%d asic:%d\n",uVar4,iVar7);
        FUN_00032218(3,local_828,0);
      }
      DAT_00087ba8 = uVar4;
      DAT_00087bac = iVar7;
    }
  }
  else {
    if ((bVar2 & 0x40) != 0) {
      iVar7 = DAT_0008a9a8 + 1;
      bVar1 = DAT_0008a9a8 < 0x15;
      DAT_0008a9a8 = iVar7;
      if ((bVar1) && (3 < DAT_00087bbc)) {
        builtin_strncpy(local_828,"!!! nonce crc error\n",0x14);
        local_814 = local_814 & 0xffffff00;
        FUN_00032218(3,local_828,0);
      }
      DAT_00723a08 = DAT_00723a08 + 1;
      return;
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00507420);
    uVar4 = DAT_00723a10;
    if (DAT_00723a18 < 0x1ff) {
      uVar12 = *(ushort *)(param_1 + 2) & 0x7fff;
      iVar7 = DAT_00723a10 * 0x3c;
      *(uint *)(&DAT_00723a20 + iVar7) = uVar12;
      *(undefined4 *)(&DAT_00723a30 + iVar7) = *(undefined4 *)(param_1 + 4);
      *(uint *)(&DAT_00723a34 + iVar7) = *param_1 & 0xf;
      uVar3 = FUN_00049f3c(uVar12);
      uVar5 = DAT_00087bbc;
      *(undefined4 *)(&DAT_00723a1c + iVar7) = uVar3;
      if (4 < uVar5) {
        snprintf(local_828,0x800,"blk ver = 0x%x\n",(uint)*(ushort *)(param_1 + 9));
        FUN_00032218(4,local_828,bVar2 & 0x40);
      }
      iVar7 = uVar4 * 0x3c;
      uVar3 = FUN_00049f50(uVar12);
      *(undefined4 *)(&DAT_00723a24 + iVar7) = uVar3;
      uVar14 = FUN_00049f24(uVar12);
      *(undefined8 *)(&DAT_00723a28 + iVar7) = uVar14;
      FUN_00049f68(uVar12,&DAT_00723a38 + iVar7,0x20);
      uVar12 = *(uint *)(&DAT_00723a30 + iVar7);
      iVar7 = *(int *)(&DAT_00723a34 + iVar7);
      uVar4 = FUN_00059230(uVar12);
      uVar3 = FUN_0002009c();
      uVar5 = FUN_00059238(uVar12,uVar3);
      if (((iVar7 < 4) && (uVar6 = FUN_0002002c(), uVar5 < uVar6)) &&
         (uVar6 = FUN_0002005c(), uVar12 != 0 && uVar4 < uVar6)) {
        iVar9 = uVar5 + iVar7 * 0x100;
        iVar10 = iVar9 + 4;
        iVar13 = *(int *)(&DAT_0008a9b4 + iVar10 * 4);
        iVar8 = uVar4 + iVar9 * 0x400 + 0x404;
        iVar9 = *(int *)(&DAT_0008a9b4 + iVar8 * 4);
        *(int *)(&DAT_0008a9b4 + iVar7 * 4) = *(int *)(&DAT_0008a9b4 + iVar7 * 4) + 1;
        *(int *)(&DAT_0008a9b4 + iVar10 * 4) = iVar13 + 1;
        *(int *)(&DAT_0008a9b4 + iVar8 * 4) = iVar9 + 1;
      }
      else if (4 < DAT_00087bbc) {
        snprintf(local_828,0x800,"buf [%x] is error!\n",uVar12);
        FUN_00032218(4,local_828,0);
        if (4 < DAT_00087bbc) {
          snprintf(local_828,0x800,"chain = %d, chip = %d, core = %d\n",iVar7,uVar5,uVar4);
          FUN_00032218(4,local_828,0);
        }
      }
      DAT_00723a10 = DAT_00723a10 + 1;
      if (0x1fe < DAT_00723a10) {
        DAT_00723a10 = 0;
      }
      DAT_00723a18 = DAT_00723a18 + 1;
      DAT_0008a9ac = 0;
    }
    else if (DAT_0008a9ac == 0) {
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_828,"nonce_read_out buffe",0x14);
        local_814._0_1_ = 'r';
        local_814._1_1_ = ' ';
        local_814._2_1_ = 'i';
        local_814._3_1_ = 's';
        builtin_strncpy(acStack_810," full!\n",8);
        FUN_00032218(3,local_828,0);
      }
      DAT_0008a9ac = 1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00507420);
  }
  return;
}

