// FUN_01657fc4 @ 01657fc4 size=540 calls_out=7 calls_in=66
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers. | inner should already be initialized by `self.reset()`

undefined4 FUN_01657fc4(uint *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int extraout_r2;
  int iVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  char cVar9;
  undefined8 uVar10;
  char local_29;
  char *local_28;
  code *local_24;
  
  uVar10 = thunk_FUN_016de0ee(param_1,param_2,0x40);
  puVar4 = (undefined4 *)((ulonglong)uVar10 >> 0x20);
  iVar8 = (int)uVar10 + extraout_r2;
  if (*(char *)(iVar8 + 0x38) != '\x01') {
    cVar7 = '\0';
    cVar9 = '\0';
    if (*(char *)(iVar8 + 0x38) == '\x02') goto LAB_01658040;
    FUN_015e8e6c(iVar8,FUN_01655ec4);
    *(undefined1 *)(iVar8 + 0x38) = 1;
  }
  cVar9 = *(char *)(iVar8 + 0x31);
  cVar7 = *(char *)(iVar8 + 0x30);
  cVar1 = cVar9;
  if (cVar7 == '\x01') {
    if (cVar9 == '\0') {
      FUN_016455a4(*puVar4,puVar4[1]);
      return 1;
    }
    cVar1 = cVar9 + -1;
  }
  *(char *)(iVar8 + 0x31) = cVar1;
LAB_01658040:
  iVar5 = 0x180;
  if (param_1[0xc] != 0) {
    iVar5 = 0xb8;
  }
  if (*(undefined1 **)(param_1[0xd] + iVar5 + 0x90) == &DAT_3b9aca00) {
    uVar2 = 0x73;
    puVar6 = &DAT_018aceec;
    pcVar3 = 
    "A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
    ;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(char *)(param_1[0xd] + iVar5 + 0x80) != '\0') {
      local_24 = (code *)&DAT_0157d360;
      local_28 = &DAT_018aced4;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_28,&DAT_018acedc);
    }
    if ((char)param_1[0x12] == '\0') {
      FUN_01653364(param_1,puVar4,param_1[0xe],param_1[0xf],param_1[0x10],1);
    }
    if ((*param_1 & 1) != 0) {
      FUN_0163e1c0(param_1 + 8,puVar4);
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if ((param_1[7] & param_1[6]) == 0xffffffff) {
        local_29 = (char)param_1[0xb];
        uVar2 = 0;
        if (local_29 != '\0') {
          local_28 = &local_29;
          local_24 = FUN_01662178;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00583a79,&local_28,&DAT_018ad16c);
        }
      }
      else {
        uVar2 = 1;
        if (cVar7 != '\0') {
          if (*(char *)(iVar8 + 0x38) != '\x01') {
            if (*(char *)(iVar8 + 0x38) == '\x02') {
              return 1;
            }
            FUN_015e8e6c(iVar8,FUN_01655ec4);
            *(undefined1 *)(iVar8 + 0x38) = 1;
          }
          *(char *)(iVar8 + 0x31) = cVar9;
          *(undefined1 *)(iVar8 + 0x30) = 1;
          return 1;
        }
      }
      return uVar2;
    }
    uVar2 = 0x35;
    puVar6 = &DAT_018acec4;
    pcVar3 = "inner should already be initialized by `self.reset()`";
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(pcVar3,uVar2,puVar6);
}

