// FUN_018cb1d8 @ 018cb1d8 size=440 calls_out=6 calls_in=2
// strings: tls13 

void FUN_018cb1d8(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ushort local_284;
  undefined1 local_282;
  undefined1 local_281;
  ushort *local_280;
  undefined4 local_27c;
  undefined1 *local_278;
  undefined4 local_274;
  char *local_270;
  undefined4 local_26c;
  char *local_268;
  undefined4 local_264;
  undefined1 *local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined1 auStack_250 [32];
  int local_230 [132];
  
  uVar4 = param_3[3];
  local_268 = "key";
  local_284 = (ushort)((uVar4 & 0xff) << 8) | (ushort)(uVar4 >> 8) & 0xff;
  local_260 = &local_281;
  local_282 = 9;
  local_270 = "tls13 ";
  local_278 = &local_282;
  local_264 = 3;
  local_281 = 0;
  local_254 = 0;
  local_27c = 2;
  local_280 = &local_284;
  local_258 = 1;
  local_25c = 1;
  local_26c = 6;
  local_274 = 1;
  if ((uint)(*(int *)(*(int *)(param_2 + 0x48) + 0x48) * 0xff) < uVar4) {
    puVar3 = &DAT_01d22bec;
    puVar2 = &DAT_01d22c4c;
  }
  else {
    FUN_01bed93e(auStack_250,0,0x20);
    if (0x20 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar4,0x20,&DAT_01d21dac);
    }
    iVar1 = FUN_01891c24(param_2,&local_280,6,auStack_250,uVar4,uVar4);
    if (iVar1 == 0) {
      DataMemoryBarrier(0xb);
      if (DAT_01d51afc != '\x02') {
        FUN_0188ff90();
      }
      (*(code *)*param_3)(local_230,auStack_250,uVar4);
      if (local_230[0] != 2) {
        FUN_01bed4e2(param_1 + 1,(uint)local_230 | 4,0x20c);
        param_1[0x84] = (int)param_3;
        *param_1 = local_230[0];
        return;
      }
      puVar3 = &DAT_01d21ddc;
      puVar2 = &DAT_01d21dcc;
    }
    else {
      puVar3 = &DAT_01d21ddc;
      puVar2 = &DAT_01d21dbc;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00533467,0x2b,local_230,puVar3,puVar2);
}

