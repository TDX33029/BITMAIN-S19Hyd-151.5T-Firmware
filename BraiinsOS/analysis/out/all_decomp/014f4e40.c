// FUN_014f4e40 @ 014f4e40 size=552 calls_out=3 calls_in=1
// strings: numeric cast found out of range | depth limit exceeded

undefined4 FUN_014f4e40(undefined1 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *local_24;
  undefined1 **local_20;
  code *local_1c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    local_1c = (code *)&LAB_0074e490;
    puVar2 = &DAT_005707b2;
    break;
  case 1:
    local_1c = (code *)&LAB_0074e490;
    puVar2 = &DAT_00574e6c;
    break;
  case 2:
    local_24 = param_1 + 1;
    local_1c = (code *)&LAB_014f50dc;
    puVar2 = &DAT_0056f1dd;
    goto LAB_014f4f74;
  case 3:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x1f) {
      FUN_01150aa8(param_2,iVar3,0x1f);
      iVar3 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar3,"numeric cast found out of range",0x1f);
    param_2[2] = iVar3 + 0x1f;
    return 0;
  case 4:
    local_24 = *(undefined1 **)(param_1 + 4);
    local_1c = (code *)&LAB_00fac484;
    puVar2 = &DAT_0056d251;
    goto LAB_014f4f74;
  case 5:
    local_1c = (code *)&LAB_01110b14;
    puVar2 = &DAT_005756c9;
    break;
  case 6:
    iVar3 = param_2[2];
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0xc);
    if ((uint)(*param_2 - iVar3) < uVar4) {
      FUN_01150aa8(param_2,iVar3,uVar4);
      iVar3 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar3,uVar1,uVar4);
    param_2[2] = iVar3 + uVar4;
    return 0;
  case 7:
    local_1c = FUN_0132d298;
    puVar2 = &DAT_005998aa;
    break;
  case 8:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x14) {
      FUN_01150aa8(param_2,iVar3,0x14);
      iVar3 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar3,"depth limit exceeded",0x14);
    param_2[2] = iVar3 + 0x14;
    return 0;
  }
  local_24 = param_1 + 4;
LAB_014f4f74:
  local_20 = &local_24;
  uVar1 = FUN_00fa948c(param_2,&DAT_01888adc,puVar2,&local_20);
  return uVar1;
}

