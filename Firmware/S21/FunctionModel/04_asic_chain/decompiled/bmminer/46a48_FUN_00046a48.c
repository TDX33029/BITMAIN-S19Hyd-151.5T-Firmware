// FUN_00046a48 @ 00046a48  size=1060  callers=1
// program: bmminer


void FUN_00046a48(byte *param_1)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  char local_2020 [16];
  undefined4 local_2010;
  char acStack_200c [8172];
  
  if (DAT_008c70b1 == '\0') {
    return;
  }
  bVar2 = *param_1;
  if ((bVar2 & 0x80) == 0) {
    uVar9 = DAT_000c964c + 1;
    bVar1 = DAT_000c964c < 0x15;
    DAT_000c964c = uVar9;
    if ((bVar1) && (3 < DAT_000be63c)) {
      builtin_strncpy(local_2020,"!!! nonce invali",0x10);
      local_2010 = CONCAT22(local_2010._2_2_,100);
      FUN_0004948c(3,local_2020,0);
    }
  }
  else {
    if ((bVar2 & 0x40) != 0) {
      iVar10 = DAT_000c964c + 1;
      bVar1 = DAT_000c964c < 0x15;
      DAT_000c964c = iVar10;
      if ((bVar1) && (3 < DAT_000be63c)) {
        builtin_strncpy(local_2020,"!!! nonce crc er",0x10);
        local_2010._0_1_ = 'r';
        local_2010._1_1_ = 'o';
        local_2010._2_1_ = 'r';
        local_2010._3_1_ = '\0';
        FUN_0004948c(3,local_2020,0);
      }
      DAT_00a68848 = DAT_00a68848 + 1;
      return;
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00944b18);
    if (DAT_00a6c924 < 0xfff) {
      uVar9 = *(ushort *)(param_1 + 2) & 0x7fff;
      if (4 < DAT_000be63c) {
        snprintf(local_2020,0x2000,"job_id: %x %02x, work_id:%d, diff:%d\n",(uint)(param_1[1] >> 7),
                 (uint)param_1[0xb],uVar9,param_1[1] & 0x7f);
        FUN_0004948c(4,local_2020,bVar2 & 0x40);
        uVar9 = *(ushort *)(param_1 + 2) & 0x7fff;
      }
      uVar11 = DAT_00a6c91c;
      iVar10 = DAT_00a6c91c * 0x3c;
      *(uint *)(&DAT_00a6c92c + iVar10) = uVar9;
      *(undefined4 *)(&DAT_00a6c93c + iVar10) = *(undefined4 *)(param_1 + 4);
      *(uint *)(&DAT_00a6c940 + iVar10) = *param_1 & 0xf;
      uVar4 = FUN_0006b02c(uVar9);
      uVar5 = DAT_000be63c;
      *(undefined4 *)(&DAT_00a6c928 + iVar10) = uVar4;
      if (4 < uVar5) {
        snprintf(local_2020,0x2000,"blk ver = 0x%x\n",(uint)*(ushort *)(param_1 + 9));
        FUN_0004948c(4,local_2020,0);
      }
      uVar5 = FUN_0006b070(uVar9);
      uVar3 = *(ushort *)(param_1 + 9);
      iVar10 = uVar11 * 0x3c;
      *(uint *)(&DAT_00a6c930 + iVar10) =
           uVar5 | (uVar3 & 7) << 0x15 | (uVar3 >> 3 & 0xff) << 8 | (uint)(uVar3 >> 0xb);
      uVar12 = FUN_0006af94(uVar9);
      *(undefined8 *)(&DAT_00a6c934 + iVar10) = uVar12;
      FUN_0006b0b4(uVar9,&DAT_00a6c944 + iVar10,0x20);
      uVar11 = *(uint *)(&DAT_00a6c93c + iVar10);
      iVar10 = *(int *)(&DAT_00a6c940 + iVar10);
      uVar9 = FUN_0008306c(uVar11);
      uVar4 = FUN_0002a514();
      uVar5 = FUN_00083088(uVar11,uVar4);
      if (((iVar10 < 4) && (uVar6 = FUN_0002a514(), uVar5 < uVar6)) &&
         (uVar6 = FUN_0002a544(), uVar11 != 0 && uVar9 < uVar6)) {
        iVar8 = iVar10 * 0x100 + uVar5 + 4;
        iVar7 = *(int *)(&DAT_000cb678 + iVar10 * 4);
        *(int *)(&DAT_000cb678 + iVar8 * 4) = *(int *)(&DAT_000cb678 + iVar8 * 4) + 1;
        iVar8 = uVar5 * 0x7f8 + iVar10 * 0x7f800 + uVar9 + 0x404;
        *(int *)(&DAT_000cb678 + iVar10 * 4) = iVar7 + 1;
        *(int *)(&DAT_000cb678 + iVar8 * 4) = *(int *)(&DAT_000cb678 + iVar8 * 4) + 1;
      }
      else if (4 < DAT_000be63c) {
        snprintf(local_2020,0x2000,"buf [%x] is error!\n",uVar11);
        FUN_0004948c(4,local_2020,0);
        if (4 < DAT_000be63c) {
          snprintf(local_2020,0x2000,"chain = %d, chip = %d, core = %d\n",iVar10,uVar5,uVar9);
          FUN_0004948c(4,local_2020,0);
        }
      }
      DAT_00a6c91c = DAT_00a6c91c + 1;
      if (0xffe < DAT_00a6c91c) {
        DAT_00a6c91c = 0;
      }
      DAT_00a6c924 = DAT_00a6c924 + 1;
      DAT_000c9650 = 0;
    }
    else if (DAT_000c9650 == 0) {
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2020,"nonce_read_out b",0x10);
        local_2010._0_1_ = 'u';
        local_2010._1_1_ = 'f';
        local_2010._2_1_ = 'f';
        local_2010._3_1_ = 'e';
        builtin_strncpy(acStack_200c,"r is full!\n",0xc);
        FUN_0004948c(3,local_2020,0);
      }
      DAT_000c9650 = 1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944b18);
  }
  return;
}

