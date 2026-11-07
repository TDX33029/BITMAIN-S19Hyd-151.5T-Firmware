// FUN_005bc2a8 @ 005bc2a8 size=328 calls_out=5 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_005bc2a8(undefined4 *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 auStack_1d0 [208];
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 *local_f8;
  undefined1 auStack_f4 [208];
  
  do {
    iVar2 = param_2[1];
    puVar4 = *(undefined4 **)(iVar2 + 0xd8);
    DataMemoryBarrier(0xb);
    if (puVar4 == (undefined4 *)0x0) {
      puVar3 = &DAT_3b9aca00;
      DataMemoryBarrier(0xb);
      if (*param_2 != iVar2) {
        puVar3 = (undefined1 *)0x3b9aca01;
      }
    }
    else {
      param_2[1] = (int)puVar4;
      if (*(undefined1 **)(iVar2 + 8) != &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
      }
      puVar3 = (undefined1 *)puVar4[2];
      if (puVar3 == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
      }
      unaff_r10 = *puVar4;
      unaff_r11 = puVar4[1];
      FUN_016dd1aa(auStack_f4,puVar4 + 3,0xcc);
      puVar4[2] = &DAT_3b9aca00;
      local_100 = unaff_r10;
      local_fc = unaff_r11;
      local_f8 = puVar3;
      if (*(undefined1 **)(iVar2 + 8) != &DAT_3b9aca00) {
        FUN_005c33e4(iVar2);
      }
      thunk_FUN_016d3fb4(iVar2);
      FUN_016dd1aa(auStack_1d0,auStack_f4,0xcc);
    }
    puVar1 = puVar3 + -999999999;
    if (puVar3 < (undefined1 *)0x3b9ac9ff) {
      puVar1 = (undefined1 *)0x0;
    }
    if (puVar1 != (undefined1 *)0x2) {
      if (puVar1 == (undefined1 *)0x0) {
        FUN_016dd1aa(param_1 + 3,auStack_1d0,0xcc);
        *param_1 = unaff_r10;
        param_1[1] = unaff_r11;
        param_1[2] = puVar3;
        return;
      }
      param_1[2] = &DAT_3b9aca00;
      return;
    }
    FUN_016da3a8();
  } while( true );
}

