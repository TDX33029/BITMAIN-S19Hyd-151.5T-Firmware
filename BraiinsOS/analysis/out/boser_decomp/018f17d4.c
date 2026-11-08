// FUN_018f17d4 @ 018f17d4 size=372 calls_out=2 calls_in=1
// strings: read_bytes

void FUN_018f17d4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined2 local_34;
  undefined1 local_32;
  int local_30;
  uint local_2c;
  uint local_28;
  char local_24;
  undefined2 local_23;
  undefined1 local_21;
  char *local_20;
  undefined4 local_1c;
  
  uVar8 = param_2[2];
  if (uVar8 == 0) {
    *param_1 = 2;
  }
  else {
    iVar7 = param_2[1];
    param_2[2] = 0;
    param_2[1] = 1;
    if (3 < uVar8) {
      local_28 = 0;
      local_2c = 3;
      local_30 = iVar7 + 1;
      FUN_019310dc(&local_24,&local_30);
      if (local_24 == '\x18') {
        if (local_2c <= local_28) {
          pcVar3 = (char *)(uVar8 - 4);
          pcVar4 = pcVar3;
          pcVar5 = local_20;
          if (local_20 < pcVar3) {
            pcVar5 = pcVar3 + -(int)local_20;
            pcVar4 = local_20 + iVar7 + 4;
          }
          iVar1 = *(int *)param_2[3];
          if (local_20 < pcVar3) {
            param_2[1] = pcVar4;
            param_2[2] = pcVar5;
            pcVar4 = local_20;
          }
          uVar6 = *param_2;
          *param_1 = 1;
          param_1[1] = local_20;
          param_1[2] = uVar6;
          param_1[3] = iVar7 - iVar1;
          param_1[4] = pcVar4 + ((iVar7 + 4) - iVar1);
          return;
        }
        local_24 = '\x0f';
        local_1c = 10;
        local_20 = "read_bytes";
      }
      else {
        local_32 = local_21;
        local_34 = local_23;
      }
      local_23 = local_34;
      local_21 = local_32;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_24,&DAT_01d23e20,&DAT_01d23e00);
    }
    piVar2 = (int *)param_2[3];
    *param_1 = 0;
    iVar1 = *piVar2;
    param_1[2] = *param_2;
    param_1[3] = iVar7 - iVar1;
    param_1[4] = (iVar7 + uVar8) - iVar1;
  }
  return;
}

