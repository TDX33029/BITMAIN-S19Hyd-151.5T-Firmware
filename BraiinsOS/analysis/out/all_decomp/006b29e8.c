// FUN_006b29e8 @ 006b29e8 size=528 calls_out=6 calls_in=3
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_006b29e8(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 auStack_2a0 [208];
  undefined1 auStack_1d0 [208];
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 *local_f8;
  undefined1 auStack_f4 [208];
  
  iVar7 = *param_2;
  if (iVar7 == 0) {
    param_1[2] = &DAT_3b9aca00;
    return;
  }
  do {
    iVar4 = *(int *)(iVar7 + 0xc);
    puVar6 = *(undefined4 **)(iVar4 + 0xd8);
    DataMemoryBarrier(0xb);
    if (puVar6 == (undefined4 *)0x0) {
      puVar5 = &DAT_3b9aca00;
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar7 + 8) != iVar4) {
        puVar5 = (undefined1 *)0x3b9aca01;
      }
    }
    else {
      *(undefined4 **)(iVar7 + 0xc) = puVar6;
      if (*(undefined1 **)(iVar4 + 8) != &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
      }
      puVar5 = (undefined1 *)puVar6[2];
      if (puVar5 == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
      }
      unaff_r10 = *puVar6;
      unaff_r11 = puVar6[1];
      FUN_016dd1aa(auStack_f4,puVar6 + 3,0xcc);
      puVar6[2] = &DAT_3b9aca00;
      local_100 = unaff_r10;
      local_fc = unaff_r11;
      local_f8 = puVar5;
      if (*(undefined1 **)(iVar4 + 8) != &DAT_3b9aca00) {
        FUN_006b2c3c(iVar4);
      }
      thunk_FUN_016d3fb4(iVar4);
      FUN_016dd1aa(auStack_1d0,auStack_f4,0xcc);
    }
    puVar2 = puVar5 + -999999999;
    if (puVar5 < (undefined1 *)0x3b9ac9ff) {
      puVar2 = (undefined1 *)0x0;
    }
    if (puVar2 != (undefined1 *)0x2) {
      if ((puVar2 == (undefined1 *)0x0) &&
         (FUN_016dd1aa(auStack_2a0,auStack_1d0,0xcc), puVar5 != &DAT_3b9aca00)) {
        if (*param_2 != 0) {
          piVar3 = (int *)(*param_2 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = *piVar3 + -1;
          DataMemoryBarrier(0xb);
        }
        *param_1 = unaff_r10;
        param_1[1] = unaff_r11;
        param_1[2] = puVar5;
        FUN_016dd1aa(param_1 + 3,auStack_2a0,0xcc);
        return;
      }
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_2 + 0x10) != 0) {
        param_1[2] = 0x3b9aca01;
        return;
      }
      piVar3 = (int *)*param_2;
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078459c(*param_2);
        }
      }
      param_1[2] = &DAT_3b9aca00;
      *param_2 = 0;
      return;
    }
    FUN_016da3a8();
  } while( true );
}

