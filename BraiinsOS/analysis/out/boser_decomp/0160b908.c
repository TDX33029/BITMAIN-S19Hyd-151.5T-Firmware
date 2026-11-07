// FUN_0160b908 @ 0160b908 size=336 calls_out=0 calls_in=1
// strings: 

longlong FUN_0160b908(uint *param_1,uint *param_2)

{
  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  puVar2 = param_1;
  if (&DAT_00000003 < param_2) {
    if ((~(0x1010100 - (*param_1 ^ 0x22222222) | *param_1) & 0x80808080) == 0) {
      puVar3 = (uint *)(4 - ((uint)param_1 & 3));
      puVar2 = (uint *)((int)param_1 + (int)puVar3);
      if (&DAT_00000008 < param_2) {
        param_2 = (uint *)((int)param_1 + (int)param_2);
        for (; puVar2 <= param_2 + -2; puVar2 = puVar2 + 2) {
          uVar4 = ~(0x1010100 - (*puVar2 ^ 0x22222222) | *puVar2);
          bVar5 = (uVar4 & 0x80808080) != 0;
          if (!bVar5) {
            uVar4 = ~(0x1010100 - (puVar2[1] ^ 0x22222222) | puVar2[1]);
          }
          if (bVar5 || (uVar4 & 0x80808080) != 0) break;
        }
        if (puVar2 < param_2) {
          do {
            if ((char)*puVar2 == '\"') goto LAB_0160ba4c;
            puVar2 = (uint *)((int)puVar2 + 1);
          } while (puVar2 != param_2);
        }
      }
      else if (puVar3 < param_2) {
        pcVar1 = (char *)((int)param_2 + (((uint)param_1 & 3) - 4));
        do {
          if ((char)*puVar2 == '\"') goto LAB_0160ba4c;
          puVar2 = (uint *)((int)puVar2 + 1);
          pcVar1 = pcVar1 + -1;
          param_2 = (uint *)0x0;
        } while (pcVar1 != (char *)0x0);
      }
    }
    else {
      do {
        if ((char)*puVar2 == '\"') goto LAB_0160ba4c;
        puVar2 = (uint *)((int)puVar2 + 1);
        param_2 = (uint *)((int)param_2 + -1);
      } while (param_2 != (uint *)0x0);
      param_2 = (uint *)0x0;
    }
  }
  else {
    do {
      if ((char)*puVar2 == '\"') {
LAB_0160ba4c:
        return CONCAT44((int)puVar2 - (int)param_1,1);
      }
      puVar2 = (uint *)((int)puVar2 + 1);
      param_2 = (uint *)((int)param_2 + -1);
    } while (param_2 != (uint *)0x0);
    param_2 = (uint *)0x0;
  }
  return ZEXT48(param_2) << 0x20;
}

