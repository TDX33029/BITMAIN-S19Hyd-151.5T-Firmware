// FUN_0079e5b8 @ 0079e5b8 size=232 calls_out=3 calls_in=1
// strings: 

bool FUN_0079e5b8(uint *param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar2;
  bool bVar3;
  uint local_60;
  uint uStack_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  uint local_4c;
  uint local_48;
  undefined1 *local_40;
  uint local_3c;
  uint local_38;
  
  FUN_015f3b0c(&local_40,1);
  puVar1 = local_40;
  bVar3 = (undefined1 *)param_1[2] != &DAT_3b9aca00;
  if (bVar3) {
    local_60 = *param_1;
    uStack_5c = param_1[1];
    local_4c = local_3c;
    local_50 = local_40;
    local_48 = local_38;
    local_58 = (undefined1 *)param_1[2];
    FUN_015f3c24(&local_40,&local_60,&local_50);
    uVar2 = extraout_r2_00;
  }
  else {
    local_40 = &DAT_3b9aca00;
    uVar2 = extraout_r2;
  }
  if ((param_2 & 1) == 0) {
    *param_1 = (uint)local_40;
    param_1[1] = uVar2;
    param_1[2] = (uint)&DAT_3b9aca00;
    return bVar3;
  }
  uVar2 = local_3c + CARRY4((uint)puVar1,param_3 & 0xffff);
  if ((int)((local_3c ^ uVar2) & ~local_3c) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  *param_1 = (uint)(puVar1 + (param_3 & 0xffff));
  param_1[1] = uVar2;
  param_1[2] = local_38;
  return bVar3;
}

