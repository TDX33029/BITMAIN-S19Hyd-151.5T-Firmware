// FUN_019baa50 @ 019baa50 size=480 calls_out=1 calls_in=0
// strings: uncategorized error

void FUN_019baa50(undefined **param_1,undefined4 *param_2)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined **local_20;
  code *local_1c;
  undefined **local_18;
  code *local_14;
  
  puVar2 = *param_1;
  puVar4 = (undefined *)((uint)puVar2 & 0x7f);
  if (puVar4 == (undefined *)0x0) {
    local_28 = (undefined *)(((uint)puVar2 & 0xffff) >> 8);
    local_20 = &local_28;
    puVar2 = &DAT_005837c5;
  }
  else {
    cVar1 = (char)puVar4 + '\x01';
    if (cVar1 < '\x02') {
      if (((uint)puVar2 & 0xff) == 0x7f) {
        local_2c = (undefined *)(((uint)puVar2 & 0xffff) >> 8);
        uVar3 = ((uint)puVar2 >> 8) - 1 & 0xff;
        if (uVar3 < 0x1f) {
          local_28 = (&PTR_DAT_01d3439c)[uVar3];
          local_24 = *(undefined4 *)(&DAT_00539064 + uVar3 * 4);
        }
        else {
          local_28 = (undefined *)0x1;
          local_24 = 0;
        }
        local_18 = &local_28;
        local_20 = &local_2c;
        puVar2 = &DAT_00575b16;
        local_14 = (code *)&DAT_0197a814;
      }
      else {
        if (puVar2 == (undefined *)0xffff) {
                    /* WARNING: Could not recover jumptable at 0x019babac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00526ca7,0x18);
          return;
        }
        puVar2 = &UNK_00526cbf;
        local_14 = FUN_012fd860;
        local_20 = param_1;
        local_18 = param_1;
      }
    }
    else {
      if (puVar4 < (undefined *)0x20) {
        local_28 = (&PTR_s_uncategorized_error_01d3431c)[(int)puVar4];
        local_24 = *(undefined4 *)(&DAT_00538fe4 + (int)puVar4 * 4);
      }
      else {
        local_28 = (undefined *)0x1;
        local_24 = 0;
      }
      if ((((uint)puVar2 & 0x80) == 0) || (cVar1 < '\x02')) {
        puVar2 = &UNK_005ab8b1;
      }
      else {
        puVar2 = &DAT_0058318a;
      }
      local_18 = &local_28;
      local_20 = &local_2c;
      local_14 = (code *)&DAT_0197a814;
      local_2c = puVar4;
    }
  }
  local_1c = FUN_012fce60;
  FUN_012fa178(*param_2,param_2[1],puVar2,&local_20);
  return;
}

