// FUN_000458a8 @ 000458a8  size=980  callers=0
// program: bmminer


undefined4 FUN_000458a8(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char acStack_2010 [8192];
  
  bVar1 = param_1[1];
  if (bVar1 == 0x90) {
    bVar1 = *param_1;
    bVar2 = param_1[2];
    uVar3 = FUN_0002a584();
    uVar5 = bVar1 & 0xf;
    uVar4 = FUN_00098658(bVar2,uVar3);
    if (uVar5 < 4) {
      (&DAT_00a67814)[uVar5] = (&DAT_00a67814)[uVar5] + 1;
      uVar3 = 0;
      *(undefined4 *)(&DAT_00a67848 + ((uVar4 & 0xff) + uVar5 * 0x100) * 4) =
           *(undefined4 *)(param_1 + 4);
    }
    else if (DAT_000be63c < 4) {
      uVar3 = 0xffffffff;
    }
    else {
      snprintf(acStack_2010,0x2000,"%s, invalid chain or asic, chain %d, asic %03d",
               "handle_got_nonce_counter",uVar5,uVar4 & 0xff);
      FUN_0004948c(3,acStack_2010,0);
      uVar3 = 0xffffffff;
    }
  }
  else if (bVar1 == 0x88) {
    bVar1 = *param_1;
    bVar2 = param_1[2];
    uVar3 = FUN_0002a584();
    uVar5 = bVar1 & 0xf;
    uVar4 = FUN_00098658(bVar2,uVar3);
    if (uVar5 < 4) {
      *(int *)(&DAT_00a673d8 + uVar5 * 0x10) = *(int *)(&DAT_00a673d8 + uVar5 * 0x10) + 1;
      uVar3 = 0;
      *(undefined4 *)(&DAT_00a6884c + ((uVar4 & 0xff) + uVar5 * 0x100) * 0x10) =
           *(undefined4 *)(param_1 + 4);
    }
    else if (DAT_000be63c < 4) {
      uVar3 = 0xfffffffe;
    }
    else {
      snprintf(acStack_2010,0x2000,"%s, invalid chain or asic, chain %d, asic %03d",
               "handle_got_nonce_counter",uVar5,uVar4 & 0xff);
      FUN_0004948c(3,acStack_2010,0);
      uVar3 = 0xfffffffe;
    }
  }
  else if (bVar1 == 0x89) {
    bVar1 = *param_1;
    bVar2 = param_1[2];
    uVar3 = FUN_0002a584();
    uVar5 = bVar1 & 0xf;
    uVar4 = FUN_00098658(bVar2,uVar3);
    if (uVar5 < 4) {
      uVar3 = 0;
      *(int *)(&DAT_00a673dc + uVar5 * 0x10) = *(int *)(&DAT_00a673dc + uVar5 * 0x10) + 1;
      *(undefined4 *)(&DAT_00a68850 + ((uVar4 & 0xff) + uVar5 * 0x100) * 0x10) =
           *(undefined4 *)(param_1 + 4);
    }
    else if (DAT_000be63c < 4) {
      uVar3 = 0xfffffffd;
    }
    else {
      snprintf(acStack_2010,0x2000,"%s, invalid chain or asic, chain %d, asic %03d",
               "handle_got_nonce_counter",uVar5,uVar4 & 0xff);
      FUN_0004948c(3,acStack_2010,0);
      uVar3 = 0xfffffffd;
    }
  }
  else if (bVar1 == 0x8a) {
    bVar1 = *param_1;
    bVar2 = param_1[2];
    uVar3 = FUN_0002a584();
    uVar5 = bVar1 & 0xf;
    uVar4 = FUN_00098658(bVar2,uVar3);
    if (uVar5 < 4) {
      uVar3 = 0;
      *(int *)(&DAT_00a673e0 + uVar5 * 0x10) = *(int *)(&DAT_00a673e0 + uVar5 * 0x10) + 1;
      *(undefined4 *)(&DAT_00a68854 + ((uVar4 & 0xff) + uVar5 * 0x100) * 0x10) =
           *(undefined4 *)(param_1 + 4);
    }
    else if (DAT_000be63c < 4) {
      uVar3 = 0xfffffffc;
    }
    else {
      snprintf(acStack_2010,0x2000,"%s, invalid chain or asic, chain %d, asic %03d",
               "handle_got_nonce_counter",uVar5,uVar4 & 0xff);
      FUN_0004948c(3,acStack_2010,0);
      uVar3 = 0xfffffffc;
    }
  }
  else if (bVar1 == 0x8b) {
    bVar1 = *param_1;
    bVar2 = param_1[2];
    uVar3 = FUN_0002a584(param_1);
    uVar5 = bVar1 & 0xf;
    uVar4 = FUN_00098658(bVar2,uVar3);
    if (uVar5 < 4) {
      uVar3 = 0;
      *(int *)(&DAT_00a673e4 + uVar5 * 0x10) = *(int *)(&DAT_00a673e4 + uVar5 * 0x10) + 1;
      *(undefined4 *)(&DAT_00a68858 + ((uVar4 & 0xff) + uVar5 * 0x100) * 0x10) =
           *(undefined4 *)(param_1 + 4);
    }
    else if (DAT_000be63c < 4) {
      uVar3 = 0xfffffffb;
    }
    else {
      snprintf(acStack_2010,0x2000,"%s, invalid chain or asic, chain %d, asic %03d",
               "handle_got_nonce_counter",uVar5,uVar4 & 0xff);
      FUN_0004948c(3,acStack_2010,0);
      uVar3 = 0xfffffffb;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

