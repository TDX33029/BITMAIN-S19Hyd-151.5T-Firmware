// FUN_00ab8b54 @ 00ab8b54 size=324 calls_out=5 calls_in=2
// strings: overflow converting from core::time::Duration to TimeDelta | `DateTime + TimeDelta` overflowed

void FUN_00ab8b54(uint *param_1,uint *param_2)

{
  uint extraout_r1;
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  bool bVar4;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  uint local_28;
  uint uStack_24;
  undefined1 *puStack_20;
  undefined1 auStack_1c [12];
  
  uVar1 = *param_2;
  puVar2 = (undefined *)param_2[1];
  if ((&UNK_0020c49b <= puVar2 &&
       (uint)(uVar1 < 0xa5e353f8) <= (uint)((int)&UNK_0020c49b - (int)puVar2)) ||
     ((uVar1 == 0xa5e353f7 && puVar2 == &UNK_0020c49b && (807000000 < param_2[2])))) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("overflow converting from core::time::Duration to TimeDelta",0x3a,auStack_1c,
                 &DAT_01c0ffa8,&DAT_01c0fd60);
  }
  FUN_0128f70c(&local_38,param_2 + 7,uVar1,puVar2,param_2[2]);
  if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("`DateTime + TimeDelta` overflowed",0x21,&DAT_01c0fd70);
  }
  local_28 = local_38;
  uStack_24 = local_34;
  puStack_20 = local_30;
  FUN_0128e808(auStack_1c);
  FUN_0128fa50(&local_38,&local_28,auStack_1c);
  if ((int)local_34 < 0) {
    local_30 = &DAT_3b9aca00;
    local_38 = extraout_r1;
  }
  else if (&DAT_3b9ac9ff < local_30) {
    uVar3 = (uint)((ulonglong)((uint)local_30 >> 9) * 0x44b83 >> 0x20);
    uVar1 = uVar3 >> 7;
    bVar4 = CARRY4(local_38,uVar1);
    local_38 = local_38 + uVar1;
    local_30 = local_30 + (uVar3 >> 7) * -1000000000;
    local_34 = local_34 + bVar4;
  }
  if (local_30 == &DAT_3b9aca00) {
    local_30 = (undefined1 *)0x0;
    local_34 = 0;
    local_38 = 0;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = (uint)local_30;
  return;
}

