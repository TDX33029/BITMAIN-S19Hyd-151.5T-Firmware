// FUN_01a613b0 @ 01a613b0 size=516 calls_out=11 calls_in=0
// strings: 

void FUN_01a613b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_2c8 [88];
  undefined1 auStack_270 [104];
  undefined1 auStack_208 [72];
  undefined4 local_1c0 [2];
  undefined1 auStack_1b8 [104];
  int local_150;
  int local_14c;
  uint local_148;
  int local_100 [2];
  undefined1 auStack_f8 [104];
  int local_90 [2];
  undefined1 auStack_88 [84];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_01a56294(local_100,param_5);
  if (local_100[0] != 4) {
    FUN_01bed4e2(local_90,local_100,0x70);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_90,&DAT_01d2c638,&DAT_01d2c6ec);
  }
  FUN_01bed4e2(auStack_270,auStack_f8,0x68);
  FUN_01a60d04(auStack_208,param_3,param_4);
  FUN_01bed4e2(auStack_1b8,auStack_270,0x68);
  local_1c0[0] = 1;
  FUN_01a60910(local_90,auStack_208);
  FUN_01a4b568(&local_150,param_2,local_90);
  if (local_150 == -0x80000000) {
    uVar2 = *(uint *)(local_14c + 8);
    if (uVar2 <= local_148) {
LAB_01a615a8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_148,uVar2,&DAT_01d2c124);
    }
    FUN_01a61630(*(int *)(local_14c + 4) + local_148 * 0xc0 + 0x70);
    uVar2 = *(uint *)(local_14c + 8);
    if (uVar2 <= local_148) goto LAB_01a615a8;
    iVar3 = *(int *)(local_14c + 4) + local_148 * 0xc0;
    FUN_01bed4e2(local_100,iVar3,0x70);
    FUN_01bed4e2(iVar3,local_1c0,0x70);
    FUN_01a56294(local_90,local_100);
    if (local_90[0] == 4) {
      FUN_01bed4e2(auStack_2c8,auStack_88,0x54);
      FUN_01a60b58(auStack_208);
      uVar1 = 4;
      if (local_34 != 8) {
        FUN_01bed4e2((uint)local_90 | 4,auStack_2c8,0x54);
        FUN_01bed4e2(param_1 + 1,local_90,0x58);
        param_1[0x17] = local_34;
        param_1[0x18] = local_30;
        param_1[0x19] = uStack_2c;
        param_1[0x1a] = uStack_28;
        param_1[0x1b] = uStack_24;
        uVar1 = 1;
      }
      goto LAB_01a6155c;
    }
    FUN_01a60b94(local_90);
  }
  else {
    FUN_01a4be0c(&local_150,local_1c0);
  }
  FUN_01a60b58(auStack_208);
  uVar1 = 4;
LAB_01a6155c:
  *param_1 = uVar1;
  return;
}

