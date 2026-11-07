// FUN_01bc93a8 @ 01bc93a8 size=248 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01bc93a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  
  uVar6 = 0;
  do {
    *(byte *)(param_1 + uVar6) =
         (byte)((int)(uint)*(byte *)(param_2 + ((int)uVar6 >> 3)) >> (uVar6 & 7)) & 1;
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x100);
  iVar1 = 1;
  pcVar8 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar8 + 1;
    if (*pcVar8 != '\0') {
      uVar6 = 1;
      iVar7 = iVar1;
      do {
        if (iVar7 == 0x100) break;
        iVar2 = (int)*(char *)(param_1 + iVar7);
        if (iVar2 != 0) {
          iVar3 = (int)*pcVar8 + (iVar2 << (uVar6 & 0xff));
          if (iVar3 < 0x10) {
            *pcVar8 = (char)iVar3;
            *(undefined1 *)(param_1 + iVar7) = 0;
          }
          else {
            iVar2 = (int)*pcVar8 - (iVar2 << (uVar6 & 0xff));
            if (iVar2 < -0xf) break;
            *pcVar8 = (char)iVar2;
            pcVar4 = (char *)(param_1 + iVar7);
            do {
              if (*pcVar4 == '\0') {
                *pcVar4 = '\x01';
                break;
              }
              pcVar5 = pcVar4 + 1;
              *pcVar4 = '\0';
              pcVar4 = pcVar5;
            } while (pcVar5 != (char *)(param_1 + 0x100));
          }
        }
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 1;
      } while (uVar6 != 7);
    }
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x101) {
      return 0;
    }
  } while( true );
}

