// FUN_015a3500 @ 015a3500 size=332 calls_out=5 calls_in=1
// strings: idn-email

void FUN_015a3500(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 local_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar6 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),&DAT_004e94a9
                       ,6);
  uVar1 = thunk_FUN_01be5118(9);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,9);
  }
  FUN_01bed4e2(uVar1,"idn-email",9);
  local_40 = CONCAT31(local_40._1_3_,3);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x20);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = local_40;
  puVar2[3] = 9;
  puVar2[4] = uVar1;
  puVar2[5] = 9;
  puVar2[6] = uStack_30;
  puVar2[7] = uStack_2c;
  uVar4 = *(uint *)(param_2 + 0x48);
  if (*(char *)(uVar4 + 0x1d) == '\x02') {
    uVar5 = 2;
  }
  else {
    uStack_30 = *(undefined4 *)(uVar4 + 0x18);
    uVar4 = *(uint *)(uVar4 + 0x1c);
    uVar1 = uVar4 >> 0x10;
    uVar5 = uVar4 >> 8;
  }
  puVar3 = (undefined8 *)thunk_FUN_01be5118(0x14);
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  *puVar3 = uVar6;
  *(undefined4 **)(puVar3 + 1) = puVar2;
  *(undefined4 *)((int)puVar3 + 0xc) = uStack_30;
  *(uint *)(puVar3 + 2) = uVar1 << 0x10 | (uVar5 & 0xff) << 8 | uVar4 & 0xff;
  *param_1 = (int)puVar3;
  param_1[1] = (int)&DAT_01cfc450;
  return;
}

