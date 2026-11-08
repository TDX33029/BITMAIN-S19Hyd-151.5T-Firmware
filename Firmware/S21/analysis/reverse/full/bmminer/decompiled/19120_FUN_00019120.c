// FUN_00019120 @ 00019120  size=652  callers=1
// program: bmminer


void FUN_00019120(void)

{
  undefined1 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 uVar7;
  size_t sVar8;
  void *pvVar9;
  void *pvVar10;
  undefined4 *puVar11;
  pthread_attr_t apStack_2018 [227];
  
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"H6HB70601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70602");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70801");
      if (iVar3 != 0) {
        pcVar2 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar2,"H6HB70802");
        if (iVar3 != 0) {
          pcVar2 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar2,"H6HB70501");
          if (iVar3 != 0) {
            FUN_00017004();
          }
        }
      }
    }
  }
  iVar3 = FUN_00017ec4();
  iVar4 = FUN_0002a5bc();
  if (iVar4 < iVar3) {
    FUN_00017ec4();
  }
  else {
    FUN_0002a5bc();
  }
  if (3 < DAT_000be63c) {
    snprintf(apStack_2018[0].__size,0x2000,
             "max sensor num = %d BITMAIN_MAX_CHAIN_NUM %d BITMAIN_MAX_CHAIN_NUM %d",8,4,4);
    FUN_0004948c(3,apStack_2018,0);
  }
  pvVar5 = malloc(0x10);
  DAT_000bfab8 = pvVar5;
  pvVar6 = malloc(0x50);
  DAT_000bfb84 = calloc(0x3c0,1);
  puVar11 = (undefined4 *)((int)pvVar5 + -4);
  pvVar5 = (void *)((int)DAT_000bfb84 + 0x3c0);
  do {
    iVar3 = 0;
    puVar11 = puVar11 + 1;
    *puVar11 = pvVar6;
    pvVar9 = pvVar6;
    pvVar10 = DAT_000bfb84;
    while( true ) {
      *(void **)((int)pvVar9 + iVar3) = pvVar10;
      iVar3 = iVar3 + 4;
      pvVar10 = (void *)((int)pvVar10 + 0x30);
      if (iVar3 == 0x14) break;
      pvVar9 = (void *)*puVar11;
    }
    DAT_000bfb84 = (void *)((int)DAT_000bfb84 + 0xf0);
    pvVar6 = (void *)((int)pvVar6 + 0x14);
  } while (DAT_000bfb84 != pvVar5);
  iVar3 = FUN_00017ec4();
  DAT_000bfb44 = malloc(iVar3 << 2);
  for (iVar3 = 0; iVar4 = FUN_00017ec4(), pvVar5 = DAT_000bfb44, iVar3 < iVar4; iVar3 = iVar3 + 1) {
    uVar7 = FUN_0002a5a4(iVar3);
    *(undefined4 *)((int)pvVar5 + iVar3 * 4) = uVar7;
    DAT_000bfb48 = 1;
  }
  sVar8 = FUN_0002a5bc();
  DAT_000bfb88 = malloc(sVar8);
  for (iVar3 = 0; iVar4 = FUN_0002a5bc(), iVar3 < iVar4; iVar3 = iVar3 + 1) {
    uVar1 = FUN_0002a60c(iVar3);
    *(undefined1 *)((int)DAT_000bfb88 + iVar3) = uVar1;
    DAT_000bfb48 = 0;
  }
  iVar3 = FUN_0002adc0();
  if (iVar3 != 0) {
    sVar8 = FUN_0002adc0();
    DAT_000bfb8c = malloc(sVar8);
    for (iVar3 = 0; iVar4 = FUN_0002adc0(), iVar3 < iVar4; iVar3 = iVar3 + 1) {
      uVar1 = FUN_0002add0(iVar3);
      *(undefined1 *)((int)DAT_000bfb8c + iVar3) = uVar1;
    }
    DAT_000bfb48 = 4;
  }
  pthread_attr_init(apStack_2018);
  pthread_attr_setstacksize(apStack_2018,0x100000);
  DAT_000bfb65 = 0;
  DAT_000bfb74 = 1;
  pthread_create(&DAT_000bfb90,apStack_2018,FUN_0001a1d0,(void *)0x0);
  pthread_detach(DAT_000bfb90);
  return;
}

