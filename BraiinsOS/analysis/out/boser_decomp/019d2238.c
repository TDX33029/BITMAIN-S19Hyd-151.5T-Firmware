// FUN_019d2238 @ 019d2238 size=276 calls_out=6 calls_in=0
// strings: 

void FUN_019d2238(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int extraout_r2;
  uint uVar4;
  undefined4 extraout_r3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  
  uVar8 = thunk_FUN_01bee35a(param_1,&DAT_01d50410,0x2a8,0);
  *(undefined4 *)((int)uVar8 + extraout_r2) = extraout_r3;
  *(undefined1 *)(param_1 + 1) = 2;
  DataMemoryBarrier(0xb);
  if (*(int *)((ulonglong)uVar8 >> 0x20) != 2) {
    FUN_019d2158();
  }
  FUN_019d21ac(&local_2c);
  if (local_2c == 1) {
    local_1c = local_24;
    local_20 = local_28;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01d28c20,&DAT_01d28c30);
  }
  uVar6 = *param_1;
  uVar7 = *(uint *)(local_28 + 0x10);
  if (uVar7 == *(uint *)(local_28 + 8)) {
    FUN_01a54b48();
  }
  iVar2 = *(int *)(local_28 + 0xc);
  *(uint *)(local_28 + 0x10) = uVar7 + 1;
  uVar3 = 0;
  *(uint *)(iVar2 + uVar7 * 4) = uVar6;
  if (uVar7 != 0) {
    do {
      uVar4 = uVar7 - 1;
      uVar1 = uVar4 >> 1;
      uVar5 = *(uint *)(iVar2 + uVar1 * 4);
      if (uVar5 <= uVar6) {
        uVar3 = uVar7;
        break;
      }
      *(uint *)(iVar2 + uVar7 * 4) = uVar5;
      uVar7 = uVar1;
    } while (1 < uVar4);
  }
  *(uint *)(iVar2 + uVar3 * 4) = uVar6;
  FUN_00a97e8c(local_28,local_24);
  return;
}

