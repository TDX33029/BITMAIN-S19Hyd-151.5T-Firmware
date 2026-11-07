// FUN_015babf4 @ 015babf4 size=284 calls_out=1 calls_in=1
// strings: 

void FUN_015babf4(undefined4 param_1,uint *param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 local_429 [33];
  uint *local_408 [140];
  char *local_1d8;
  undefined4 local_1d4;
  char *local_1d0;
  undefined4 local_1cc;
  undefined *local_1c8;
  undefined1 auStack_110 [40];
  uint **ppuStack_e8;
  undefined *puStack_e4;
  undefined1 *puStack_e0;
  code *local_dc;
  undefined1 auStack_d8 [180];
  
  local_429[0] = param_3;
  if (4 < DAT_01d51b00) {
    local_dc = FUN_012fbb44;
    puStack_e0 = local_429;
    puStack_e4 = &DAT_015a7534;
    local_1c8 = &DAT_01cfc948;
    local_1cc = 0x17;
    local_1d0 = "m";
    local_1d4 = 0x17;
    local_1d8 = "m";
    local_408[0] = param_2;
    ppuStack_e8 = local_408;
    FUN_015fb650(&DAT_005b600a,&ppuStack_e8,5,&local_1d8);
  }
  iVar1 = 1;
  if ((uint)(*param_2 < 2) <= -param_2[1]) {
    iVar1 = *param_2 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x015bad0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_015bad10 + *(int *)(&DAT_015bad10 + iVar1 * 4)))
            (*(int *)(&DAT_015bad10 + iVar1 * 4),&DAT_015bad10,auStack_110,auStack_d8);
  return;
}

