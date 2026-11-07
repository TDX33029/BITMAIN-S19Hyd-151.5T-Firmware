// FUN_016f20e0 @ 016f20e0 size=272 calls_out=0 calls_in=1
// strings: 

longlong FUN_016f20e0(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar3;
  char *pcVar2;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  
  pbVar9 = (byte *)(param_1 + -1);
  uVar4 = 0;
  do {
    iVar10 = (int)uVar4 >> 3;
    uVar11 = uVar4 & 7;
    uVar4 = uVar4 + 1;
    pbVar9 = pbVar9 + 1;
    *pbVar9 = (byte)((int)(uint)*(byte *)(param_2 + iVar10) >> uVar11) & 1;
  } while (uVar4 != 0x100);
  pcVar12 = param_1 + 0x100;
  pcVar3 = param_1;
  do {
    while (pcVar2 = pcVar3 + 1, *pcVar3 == '\0') {
LAB_016f2128:
      pcVar3 = pcVar2;
      if (pcVar2 == pcVar12) {
        return ZEXT48(pcVar2) << 0x20;
      }
    }
    pcVar7 = (char *)0x1;
    pcVar1 = pcVar2;
    do {
      if (pcVar7 == param_1 + (0x101 - (int)pcVar2)) goto LAB_016f2128;
      if (*pcVar1 != 0) {
        iVar10 = (int)*pcVar1 << ((uint)pcVar7 & 0xff);
        iVar8 = *pcVar3 + iVar10;
        if (iVar8 < 0x10) {
          *pcVar3 = (char)iVar8;
          *pcVar1 = '\0';
        }
        else {
          iVar10 = *pcVar3 - iVar10;
          if (iVar10 < -0xf) goto LAB_016f2128;
          *pcVar3 = (char)iVar10;
          pcVar6 = pcVar1;
          do {
            if (*pcVar6 == '\0') {
              *pcVar6 = '\x01';
              break;
            }
            pcVar5 = pcVar6 + 1;
            *pcVar6 = '\0';
            pcVar6 = pcVar5;
          } while (pcVar5 != pcVar12);
        }
      }
      pcVar7 = pcVar7 + 1;
      pcVar1 = pcVar1 + 1;
    } while (pcVar7 != (char *)0x7);
    pcVar3 = pcVar2;
    if (pcVar2 == pcVar12) {
      return 0;
    }
  } while( true );
}

