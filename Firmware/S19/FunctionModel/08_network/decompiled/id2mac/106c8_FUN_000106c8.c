// FUN_000106c8 @ 000106c8  size=488  callers=1
// program: id2mac


undefined4 FUN_000106c8(char *param_1)

{
  FILE *__stream;
  size_t sVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (DAT_00021448 == 0) {
    do {
      __stream = fopen64("/dev/urandom","rb");
      if (__stream == (FILE *)0x0) {
        return 0xffffffff;
      }
      sVar1 = fread(&DAT_00021450,1,0x10,__stream);
      fclose(__stream);
      if (sVar1 != 0x10) {
        return 0xffffffff;
      }
    } while ((DAT_00021450 == 0 && DAT_00021454 == 0) && (DAT_00021458 == 0 && DAT_0002145c == 0));
    DAT_00021448 = 1;
  }
  uVar7 = DAT_00021450 ^ DAT_00021450 << 0x17;
  uVar2 = DAT_00021458 ^ DAT_00021458 << 0x17;
  uVar6 = (DAT_00021454 << 0x17 | DAT_00021450 >> 9) ^ DAT_00021454;
  DAT_00021450 = (DAT_00021458 >> 5 | DAT_0002145c << 0x1b) ^ DAT_00021458 ^ uVar7 ^
                 (uVar7 >> 0x12 | uVar6 << 0xe);
  uVar7 = (DAT_0002145c << 0x17 | DAT_00021458 >> 9) ^ DAT_0002145c;
  DAT_00021454 = DAT_0002145c ^ DAT_0002145c >> 5 ^ uVar6 ^ uVar6 >> 0x12;
  bVar8 = CARRY4(DAT_00021450,DAT_00021458);
  local_30 = DAT_00021450 + DAT_00021458;
  DAT_00021458 = uVar2 ^ (uVar2 >> 0x12 | uVar7 << 0xe) ^ DAT_00021450 ^
                 (DAT_00021450 >> 5 | DAT_00021454 << 0x1b);
  uVar6 = uVar7 ^ uVar7 >> 0x12 ^ DAT_00021454 ^ DAT_00021454 >> 5;
  pcVar5 = "xxxxxxxxxxxx4xxxyxxxxxxxxxxxxxxx";
  uVar2 = 0;
  cVar3 = 'x';
  local_24 = uVar6 + DAT_00021454 + (uint)CARRY4(DAT_00021458,DAT_00021450);
  local_28 = DAT_00021458 + DAT_00021450;
  local_2c = DAT_00021454 + DAT_0002145c + (uint)bVar8;
  DAT_0002145c = uVar6;
  do {
    while( true ) {
      pcVar4 = param_1;
      uVar6 = (uint)*(byte *)((int)&local_30 + ((int)uVar2 >> 1));
      if ((uVar2 & 1) == 0) {
        uVar6 = uVar6 & 0xf;
      }
      else {
        uVar6 = (int)uVar6 >> 4;
      }
      if (cVar3 != 'x') break;
      *pcVar4 = "0123456789abcdef"[uVar6];
LAB_00010834:
      uVar2 = uVar2 + 1;
      pcVar5 = pcVar5 + 1;
      cVar3 = *pcVar5;
      param_1 = pcVar4 + 1;
      if (cVar3 == '\0') goto LAB_00010884;
    }
    if (cVar3 == 'y') {
      *pcVar4 = "0123456789abcdef"[(uVar6 & 3) + 8];
      goto LAB_00010834;
    }
    *pcVar4 = cVar3;
    pcVar5 = pcVar5 + 1;
    cVar3 = *pcVar5;
    param_1 = pcVar4 + 1;
  } while (cVar3 != '\0');
LAB_00010884:
  pcVar4[1] = '\0';
  return 0;
}

