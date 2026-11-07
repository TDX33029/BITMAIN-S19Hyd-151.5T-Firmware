// FUN_0122b5a0 @ 0122b5a0 size=280 calls_out=1 calls_in=1
// strings: 

bool FUN_0122b5a0(undefined4 param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = true;
  if (*param_2 == '\x03') {
    uVar5 = *(uint *)(param_2 + 0xc);
    bVar7 = false;
    if (0xffffff02 < uVar5 - 0xfe) {
      iVar6 = *(int *)(param_2 + 8);
      cVar1 = *(char *)(iVar6 + uVar5 + -1);
      if (cVar1 != '.') {
        uVar3 = 0;
        uVar4 = 0;
        do {
          while (*(byte *)(iVar6 + uVar4) == 0x2e) {
            if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c();
            }
            if (uVar3 - uVar4 < 0xffffffc1) {
              return false;
            }
            cVar2 = *(char *)(iVar6 + uVar3);
            bVar7 = cVar2 == '-';
            if (!bVar7) {
              cVar2 = *(char *)(iVar6 + -1 + uVar4);
            }
            if (bVar7 || cVar2 == '-') {
              return false;
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
            if (uVar3 == uVar5) goto LAB_0122b65c;
          }
          if ((&DAT_003a8ae0)[*(byte *)(iVar6 + uVar4)] != '\x01') {
            return false;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar5);
LAB_0122b65c:
        if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar3,uVar5,uVar5,&DAT_0188aa98);
        }
        bVar7 = false;
        if (0xffffffc0 < uVar3 - uVar5) {
          return cVar1 != '-' && *(char *)(iVar6 + uVar3) != '-';
        }
      }
    }
  }
  return bVar7;
}

