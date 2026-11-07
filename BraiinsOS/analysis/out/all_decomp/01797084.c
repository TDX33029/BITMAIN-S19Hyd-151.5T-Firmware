// FUN_01797084 @ 01797084 size=572 calls_out=2 calls_in=2
// strings: 

uint FUN_01797084(uint param_1,int param_2,int param_3,int param_4,int param_5,uint *param_6,
                 int param_7,uint param_8)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint local_40;
  uint local_3c;
  
  if ((param_8 & 2) == 0) {
    uVar7 = 0x20U - LZCOUNT(param_2);
    if (0x21U - LZCOUNT(param_3) <= 0x20U - LZCOUNT(param_2)) {
      uVar7 = 0x21U - LZCOUNT(param_3);
    }
    if (param_1 == 0) {
      param_1 = 0xb;
    }
    uVar4 = 0x1e - LZCOUNT(param_2 + -1);
    if (uVar4 <= param_1) {
      param_1 = uVar4;
    }
    if (param_1 < uVar7) {
      param_1 = uVar7;
    }
    if (0xb < param_1) {
      param_1 = 0xc;
    }
    if (param_1 < 5) {
      param_1 = 5;
    }
    return param_1;
  }
  if (param_3 == -1) {
    uVar7 = 0;
    iVar5 = -4;
  }
  else {
    iVar5 = param_3 * 4;
    piVar2 = (int *)(param_7 + -4);
    iVar6 = 0;
    do {
      piVar2 = piVar2 + 1;
      if (*piVar2 != 0) {
        iVar6 = iVar6 + 1;
      }
    } while ((int *)(param_7 + iVar5) != piVar2);
    uVar7 = 0x20 - LZCOUNT(iVar6);
    if (param_1 < uVar7) {
      return param_1;
    }
  }
  local_40 = 0xfffffffe;
  uVar4 = uVar7;
  local_3c = param_1;
  do {
    while (uVar1 = FUN_0179635c(param_6,param_7,param_3,uVar4,param_4,param_5), 0xffffff88 < uVar1)
    {
LAB_01797128:
      uVar4 = uVar4 + 1;
      if (param_1 < uVar4) {
        return local_3c;
      }
    }
    if (uVar1 < uVar7) {
      uVar3 = uVar7;
    }
    else {
      uVar3 = uVar1;
    }
    if (uVar3 < uVar4) {
      return local_3c;
    }
    uVar1 = FUN_01795bc8(param_4 + 0x2ec,param_5 + -0x2ec,param_6,param_3,uVar1,param_4,param_5);
    if (0xffffff88 < uVar1) goto LAB_01797128;
    if (-1 < param_3) {
      uVar3 = 0;
      piVar2 = (int *)(param_7 + -4);
      puVar8 = param_6;
      do {
        puVar8 = puVar8 + 1;
        piVar2 = piVar2 + 1;
        uVar3 = *piVar2 * (*puVar8 & 0xff) + uVar3;
      } while (piVar2 != (int *)(param_7 + iVar5));
      uVar1 = uVar1 + (uVar3 >> 3);
    }
    if (local_40 + 1 < uVar1) {
      return local_3c;
    }
    if (uVar1 < local_40) {
      local_3c = uVar4;
      local_40 = uVar1;
    }
    else {
    }
    uVar4 = uVar4 + 1;
    if (param_1 < uVar4) {
      return local_3c;
    }
  } while( true );
}

