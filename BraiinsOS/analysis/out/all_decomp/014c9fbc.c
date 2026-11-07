// FUN_014c9fbc @ 014c9fbc size=380 calls_out=6 calls_in=1
// strings: 

void FUN_014c9fbc(undefined2 *param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  uint *unaff_r4;
  uint local_9c;
  int local_98;
  undefined2 local_24;
  
  bVar2 = *(byte *)(param_2 + 0x2e0);
  if (bVar2 < 2) {
    if (*(char *)(param_2 + 0x265) == '\0') {
      *(undefined2 *)(param_2 + 0x265) = 0x101;
      local_98 = 0;
      local_9c = 0x80000001;
      local_24 = 4;
      FUN_01525ed4(param_2 + 0x10,&local_9c,*(char *)(param_2 + 0x41) == '\x02');
      bVar2 = *(byte *)(param_2 + 0x2e0);
    }
    *(byte *)(param_2 + 0x2e0) = bVar2 | 2;
  }
  if (*(int *)(param_2 + 0x218) != 0) {
    unaff_r4 = &local_9c;
    do {
      FUN_014bd320(unaff_r4,param_2,param_2 + 0x10,param_3);
      if ((local_9c & 0xff) == 5) {
        *(undefined1 *)param_1 = 5;
        return;
      }
      if ((local_9c & 0xff) != 4) {
        uVar1 = *(undefined2 *)((uint)unaff_r4 | 1);
        *(int *)(param_1 + 2) = local_98;
        uVar3 = *(undefined1 *)((undefined2 *)((uint)unaff_r4 | 1) + 1);
        *(undefined1 *)param_1 = (undefined1)local_9c;
        *(undefined1 *)((int)param_1 + 3) = uVar3;
        *(undefined2 *)((int)param_1 + 1) = uVar1;
        return;
      }
      if (local_98 == 0) {
        *param_1 = 0x1701;
        return;
      }
    } while (*(int *)(param_2 + 0x218) != 0);
  }
  if (*(int *)(param_2 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ad11c);
  }
  iVar5 = FUN_016d995c(*(int *)(param_2 + 0xc),1);
  if (iVar5 == -1) {
    puVar6 = (uint *)FUN_016d2bc8();
    unaff_r4 = (uint *)*puVar6;
    cVar4 = FUN_005bc530(unaff_r4);
    uVar3 = 0;
    if (cVar4 == '\a') {
      uVar3 = 4;
    }
  }
  else {
    uVar3 = 4;
  }
  *(uint **)(param_1 + 2) = unaff_r4;
  param_1[1] = 0;
  *(undefined1 *)((int)param_1 + 1) = 0;
  *(undefined1 *)param_1 = uVar3;
  return;
}

